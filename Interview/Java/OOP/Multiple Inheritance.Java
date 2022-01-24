package newjava;

interface backend{
    public void connect();
}

class frontend{
    public void responsive(String str){
        System.out.println(str + " be can used frontend");
    }
}

public class Newjava extends frontend implements backend {
    String language = "java";
    public void connect(){
        System.out.println(language + " be can used backend");
    }
    
    public static void main(String[] args) {

        Newjava java = new Newjava();
        java.connect();
        java.responsive(java.language);
    }
}

/*
java be can used backend
java be can used frontend
*/
