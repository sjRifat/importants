package newjava;

abstract class Animal {
  abstract void makeSound();

  public void eat() {
    System.out.println("I can eat.");
  }
}

class Dog extends Animal {

  // provide implementation of abstract method
  public void makeSound() {
    System.out.println("Bark bark");
  }
}

public class Newjava {
    
  public static void main(String[] args) {

    Dog d1 = new Dog();

    d1.makeSound();
    d1.eat();
  }
}

/*
Bark bark
I can eat.
*/
