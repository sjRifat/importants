package newjava;

abstract class MotorBike {
  abstract void brake();
}

class SportsBike extends MotorBike {
    
  public void brake() {
    System.out.println("SportsBike Brake");
  }
}

class MountainBike extends MotorBike {
    
  public void brake() {
    System.out.println("MountainBike Brake");
  }
}

public class Newjava {
    
  public static void main(String[] args) {

    MountainBike m1 = new MountainBike();
    m1.brake();
    SportsBike s1 = new SportsBike();
    s1.brake();
  }
}

/*
MountainBike Brake
SportsBike Brake
*/
