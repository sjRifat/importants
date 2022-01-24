package newjava;

class animal{
    public void eat(){
        System.out.println("i can eat");
    }
}

class dog extends animal{
    @Override
    public void eat(){
        System.out.println("i eat food");
    }
    
    public void bark(){
        System.out.println("barking.....");
    }
}

public class Newjava {
    
  public static void main(String[] args) {

    dog labrador = new dog();
    labrador.eat();
    labrador.bark();
  }
}

/*
i eat food
barking.....
*/
