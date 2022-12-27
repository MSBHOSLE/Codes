//
//
import java.util.*;

class ExceptionDemoSolution
{
  public static void main(String a[])
  {
    Scanner sobj = new Scanner(System.in);

    int iNo1 = 0, iNo2 = 0, iAns=0;

    System.out.println("Enter the first Number:- ");
    iNo1 = sobj.nextInt();

    System.out.println("Enter the second Number:- ");
    iNo2 = sobj.nextInt();

    try
    {
      System.out.println("Inside Try Block:-");
      iAns = iNo1/iNo2;
    }

    catch(ArithmeticException obj)
    {
      System.out.println("Inside catch 1 :-");
      System.out.println(obj);
    }

    catch(NullPointerException obj)
    {
      System.out.println("Inside catch 2 :-");
      System.out.println(obj);
    }

    catch(Exception obj)      //M S Dhoni  / Baarik JaaaLi
    {
      System.out.println("Inside catch 3 :-");
      System.out.println(obj);
    }

    finally
    {
      System.out.println("Inside finally block :-");
      sobj.close();
    }

    System.out.println("Division is:- "+iAns);
  }
}
