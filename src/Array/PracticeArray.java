package Array;

import java.util.Scanner;

public class PracticeArray {

    static int maxNumber(int[] array)
    {
        int legnth=array.length;

        int max=array[0];

        int i=1;
        while (i<legnth)
        {
            if(array[i]>max)
            {
                max=array[i];
            }
            i++;
        }
        return max;
    }

    public static void main(String[] args)
    {
        //Initialize an integer type array.
        //input 10 integers from the users in an array.
        //Write a method that takes an array and return the highest valued number from the array.
        //Print the number.

        int[] array=new int[10];
        System.out.println("Enter 10 numbers to find the highest one:");

        Scanner input=new Scanner(System.in);

       int i=0;
       while(i<10)
       {
           System.out.printf(">>");
           array[i]=input.nextInt();
           i++;
       }

        System.out.println("The highest number is : "+maxNumber(array));


    }
}
