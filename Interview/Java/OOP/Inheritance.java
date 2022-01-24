package newjava;

class animal{
    String name;
    public void eat(){
        System.out.println("i can eat");
    }
}

class dog extends animal{
    public void display(){
        System.out.println("my name is " + name);
    }
}

public class Newjava {
    
  public static void main(String[] args) {

    dog labrador = new dog();
    labrador.name = ("sjr");
    labrador.display();
    labrador.eat();
  }
}
