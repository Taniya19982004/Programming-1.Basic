import java.util.Scanner;
public class Recursion {
    
    int factorial(int n)
    {
        if(n==0)
        {
            return 1;
        }
        
        return n*factorial(n-1);
    }
    public static void main(String args[]) {
     

      System.out.println("enter a number");
      Scanner sc =new Scanner(System.in);
      int n=sc.nextInt();
      
       Recursion obj = new  Recursion ();
      int r= obj.factorial(n);
      System.out.println(r);
      sc.close();
    }
}
