// #include<stdio.h>

// typedef struct node Node;
// struct node{
//     int data;
//     Node* left;
//     Node* right;
// };

// Node* treeNode(int item)
// {
//     Node* newNode=(Node*)malloc(sizeof(Node));
//     if(newNode==NULL)
//     {
//         printf("New node can not be created.\n");
        
//     }
//     newNode->data=item;
//     newNode->left=NULL;
//     newNode->right=NULL;

//     return newNode;
// }

// void addLeftChild(Node* node, Node* child)
// {
//     node->left=child;
// }
// void addRightChild(Node* node, Node* child)
// {
//     node->right=child;
// }
// Node* createTree()
// {
//     Node* towelve=treeNode(12);
//     Node* eight=treeNode(8);
//     Node* eighteen=treeNode(18);
//     Node* five=treeNode(5);
//     Node* elaven=treeNode(11);

//     addLeftChild(towelve,eight);
//     addRightChild(towelve,eighteen);
//     addLeftChild(eight,five);
//     addRightChild(eight,elaven);

//     return towelve;
// }
// int main()
// {
//     Node* root=createTree();
//     printf("%d\n",root->data);

//     return 0;
// }
#include<stdio.h>

typedef struct node Node;
struct node{
    int data;
    Node* left;
    Node* right;
};

Node* treeNode(int item)
{
    Node* newNode=(Node*)malloc(sizeof(Node));
    if(newNode==NULL)
    {
        printf("New node can not be created.\n");
        
    }
    newNode->data=item;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}

void addLeftChild(Node* node, Node* child)
{
    node->left=child;
}
void addRightChild(Node* node, Node* child)
{
    node->right=child;
}
Node* createTree()
{
    Node* one=treeNode(1);
    Node* two=treeNode(2);
    Node* three=treeNode(3);
    Node* four=treeNode(4);
    Node* five=treeNode(5);
    Node* six=treeNode(6);

    addLeftChild(one,two);
    addRightChild(one,three);
    addLeftChild(two,five);
    addRightChild(two,six);

    return one;
}
void preOrder(Node *node)
{
    printf("%d ",node->data);
    if(node->left !=NULL)
    {
        preOrder(node->left);
    }
    if(node->right!=NULL);
    {
        preOrder(node->right);
    }
}
int main(){
    Node* root=createTree();
    preOrder(root);
    printf("\n");

    return 0;
}