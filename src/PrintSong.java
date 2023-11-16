import java.util.Scanner;

public class PrintSong {
    public static void main(String[] args)
    {
       String[] song={"100 bottles of beer on the wall\n100 bottles of beer\nIf one of those bottles happen to fall\n 99 bottles on the wall",
               "99 bottles of beer on the wall\n99 bottles of beer\nIf one of those bottles happen to fall\n 98 bottles on the wall"};
       int verseNum;

       Scanner input=new Scanner(System.in);

        System.out.println("Enter 1 to see first verse.\n Enter 2 to see second verse.");
        verseNum= input.nextInt();

        if(verseNum==1)
        {
            System.out.println(song[0]);
        }
        else
        {
            System.out.println(song[1]);
        }



    }
}
