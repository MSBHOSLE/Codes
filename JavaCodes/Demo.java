//
//
class Maths
{
  public int iNo1;
  public int iNo2;

  public Maths()
  {
    System.out.println("Insode Default Constructor");
    iNo1=0;
    iNo2=0;
  }
  public Maths(int a, int b)
  {
    System.out.println("Inside Parameterizes Constructor");
    iNo1=a;
    iNo2=b;
  }
  public int Addition()
  {
    int iAns=0;
    iAns=iNo1 + iNo2;
    return iAns;
  }
  public int Subtraction()
  {
    int iAns=0;
    iAns=iNo1 - iNo2;
    return iAns;
  }

}//End of Maths Class

//main class ani File ch naaav Same pahije
class Demo
{
  public static void main(String arr[])
  {
    System.out.println("Inside Main Function:- ");

    Maths mobj1 = new Maths();
    Maths mobj2 = new Maths(10,11);

    int iRet=0;
    iRet=mobj1.Addition();
    System.out.println("Addition is:- "+iRet);

    iRet=mobj2.Addition();
    System.out.println("Addition is:- "+iRet);
  }
}
