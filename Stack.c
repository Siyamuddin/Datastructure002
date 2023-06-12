#include<stdio.h>
#include<string.h>

#define maxsize 100

typedef struct{
    int top;
    char data[maxsize];
}stack;

void push(stack *s, char* item)
{
    if(s->top==maxsize)
    {
        printf("The stack is full.\n");
        return;
    }

    s->data[s->top]=strdup(item);
    s->top+=1;
}

char* pop(stack *s)
{
    if(s->top==0)
    {
        printf("The stack is empty.\n");
        return;
    }
    s->top-=1;
    return s->data[s->top];
}

int main()
{
    stack mystack;
    mystack.top=0;

    push(&mystack,"Alauddin");
    push(&mystack,"Mostafa");

    printf("Next : %s",pop(&mystack));
    printf("Next : %s",pop(&mystack));

    return 0;

}
