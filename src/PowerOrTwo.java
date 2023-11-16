public class PowerOrTwo {
    static void powerOfTwo()
    {
        int i=2;
        while(i<=10)
        {
            System.out.println("Answer("+i+"): "+(int)Math.pow(2,i));
            i++;
        }

    }
    public static void main(String[] args)
    {
        powerOfTwo();

    }
}
