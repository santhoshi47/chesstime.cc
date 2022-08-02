import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,a,b;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    a=s.nextInt();
		    b=s.nextInt();
		    if(a+b>10)
		    System.out.println(21-(a+b));
		    else
		    System.out.println("-1");
		}
	}
}
