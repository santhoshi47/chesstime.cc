import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
     int t,x,y,z;
     Scanner s=new Scanner(System.in);
     t=s.nextInt();
     for(int i=0;i<t;i++)
     {
         x=s.nextInt();
         y=s.nextInt();
         z=(y-x);
         if(z%8==0)
         System.out.println(z/8);
         else if((z%8<8)||(z%8>8))
         System.out.println((z/8)+1);
         else if(x==y)
         System.out.println("0");
         
     }

	}
}
