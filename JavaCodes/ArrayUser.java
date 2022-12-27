//
//

import java.util.Scanner;

class ArrayUser
{
  public static void main(String Arg[])
  {
    int iCnt=0;
    int iSum=0;

    Scanner sobj = new Scanner(System.in);

    System.out.println("Enter the Size Of Array:- ");
    int iSize = sobj.nextInt();

    //C:- int Arr[] = int(*)malloc(iSize * sizeof(int));
    int Arr[] = new int[iSize];
    System.out.println("Number of Elements in Array Are:- "+Arr.length);

    System.out.println("Enter The Elements Of Array:- ");
    for(iCnt = 0; iCnt < Arr.length ; iCnt++)
    {
      Arr[iCnt] = sobj.nextInt();
    }

    System.out.println("The Elements Of Array:- ");
    for(iCnt = 0; iCnt < Arr.length ; iCnt++)
    {
      System.out.println(Arr[iCnt]);
    }

    System.out.println("The Addition Of Elements:- ");
    for(iCnt=0; iCnt<Arr.length; iCnt++)
    {
      iSum = iSum + Arr[iCnt];
    }
    System.out.println("Addition is :- "+iSum);
  }

}
