//
//
class StaticDemo
{
  public static void main(String arg[])
  {
    System.out.println("Inside Main:- ");

    Demo.gun();
    System.out.println("Value Static Block No3:- "+Demo.No3);
    System.out.println("Value Static Block No4:- "+Demo.No4);

    //for object creation:-
    Demo obj1 = new Demo();
    Demo obj2 = new Demo();
    obj1.Fun();
  }
}

class Demo
{
  public int No1;           //Non-Static characteristics
  public int No2;           //Non-Static characteristics
  public static int No3;           //Static characteristics
  public static int No4;           //Static characteristics

  static      //Static Block
  {
    System.out.println("Inside Static Block");
    No3=51;
    No4=101;
    //System.out.println("Inside Static Block No3:- "+No3);
  }

  public Demo()   //Constructor
  {
    System.out.println("Inside Constructor");
    No1=11;
    No2=22;
  }

  public void Fun()     //Non-static Method
  {
    System.out.println("Inside Non-Static Method Fun");
    System.out.println("Value Static of No1:- "+this.No1);
    System.out.println("Value Static of No2:- "+this.No2);
    System.out.println("Value Static of No3:- "+this.No3);
    System.out.println("Value Static of No4:- "+this.No4);

  }

  public static void gun()      //Static Method
  {
    System.out.println("Inside Static Method Fun");
    //this NA:-System.out.println("Value Static of No1:- "+this.No1);

    //Static Method can access only static Data
    //We can't use this ({[.this.]}) keyword

    //Static Method can access only static Data
    //System.out.println("Value Static of No1:- "+No1);
    //System.out.println("Value Static of No2:- "+No2);
    System.out.println("Value Static of No3:- "+No3);
    System.out.println("Value Static of No4:- "+No4);
  }

}
