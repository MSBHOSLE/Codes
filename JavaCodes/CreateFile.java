import java.io.*;

class CreateFile
{
    public static void main(String arg[]) throws Exception
    {
        File fobj = new File("Marvellous1.txt");

        if(fobj.createNewFile())
        {
            System.out.println("File created succesfully");
        }
        else
        {
            System.out.println("Unable to create the file or Check it's alrady created");
        }
    }
}
