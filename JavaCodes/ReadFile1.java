import java.io.*;

class ReadFile1
{
    public static void main(String arg[]) throws Exception
    {
        FileInputStream fobj = new FileInputStream("Marvellous.txt");
        int i =0;

        //it will display as bit by bit

        while((i=fobj.read()) != -1)
        {
          System.out.println((char)i);    //println se new line pe data

        }

        System.out.println();
        fobj.close();
    }
}
