import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,a,b,c;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		 for(int i=0;i<t;i++)
		   {
		       a=s.nextInt();
		       b=s.nextInt();
		       c=s.nextInt();
		       if(a>=b&&a>=c)
		       System.out.println(a);
		       else if(b>=a&&b>=c)
		       System.out.println(b);
		       else
		       System.out.println(c);
		   } 
		
	}
}
