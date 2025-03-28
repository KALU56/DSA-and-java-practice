import java.util.Scanner;

public class simple_claculater {
  public static void main(String[] args) {
      Scanner x =new Scanner(System.in);
      System.out.println("Enter two number: ");
      int num=x.nextInt();
      int num2=x.nextInt();
      int sum=num+num2;
      int sub=num-num2;
      int mul=num*num2;
      int div=num/num2;
      System.out.println("sum: "+sum);
      System.out.println("sub: "+sub);
      System.out.println("mul: "+mul);
      System.out.println("div: "+div);
      x.close();

  }
  
}
