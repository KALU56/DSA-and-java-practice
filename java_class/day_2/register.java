import java.util.Scanner;

public class register {
  public static void main(String[] args){
    Scanner register =new Scanner(System.in);

  
    System.out.println("enter your name");
    String name=register.next();

    System.out.println("enter your email");
    String email=register.next();

    System.out.println("enter your phone number");
    String phone=register.next();

    System.out.println("enter your password");
    String password=register.next();

    System.out.println("wellcome to register page");
    System.out.println(" name : " +name);
    System.out.println(" email : "+email);
    System.out.println(" phone number : "+phone);
    System.out.println("password :"+password);  
  }

  
}
