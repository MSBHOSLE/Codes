import java.io.*;

class Wrapper
{
    public static void main(String A[])
    {
        int no = 11;

        Integer iobj = new Integer(no);

        System.out.println(no);
        System.out.println(iobj);

        int x = iobj;
        System.out.println(x);

    }
}
