import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		  int t,n;
		  Scanner s=new Scanner(System.in);
		  t=s.nextInt();
		  for (int i=0;i<t;i++ ){
		      n=s.nextInt();
		      if(n<=4)
		      System.out.println(n/n);
		      else if(n%4==0)
		      System.out.println(n/4);
		      else
		      System.out.println((n/4)+1);
		  } 
	}
}
