//
//It's inbuilt class it present every where by default
/*
class Object
{
  code:-
}

*/
class Base
{
  public int A,B;
  public Base()
  {
    System.out.println("Base Constructor;- ");
    this.A=10;
    this.B=20;
  }
  public void Fun()     //Defination
  {
    System.out.println("Inside Base Fun");
  }
  public void Gun()     //Defination
  {
    System.out.println("Inside Base Gun");
  }
  public void Fun(int No)     //OverLoaded Defination
  {
    System.out.println("Inside Base Fun wit one Integer");
  }

}

class Derived extends Base      //C++___Class Derived: public Base
{
  public int X,Y;
  public Derived()
  {
    System.out.println("Inside Derived Constructor");
    this.X=30;
    this.Y=40;
  }
  public void Sun()     //Defination
  {
    System.out.println("Inside Derived Sun");
  }
  public void Gun()     //OverRided__Defination
  {
    System.out.println("Inside Derived Gun");
  }


}

class Single
{
  public static void main(String arg[])
  {
    //Base bobj1 = new Base();                //No Casting
    Derived dobj1 = new Derived();          //No Casting
    //Base bobj2 = new Derived();             //__Up Casting____=Allowed
    //Derived dobj2 = new Base();           //__Down Casting______= ( Not Allowed )

    dobj1.Fun();
    dobj1.Fun(11);
    dobj1.Gun();
    dobj1.Sun();

  }
}
