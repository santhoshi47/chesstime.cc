import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n,x;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    n=s.nextInt();
		    x=s.nextInt();
		    if(x%n==0)
		    System.out.println("YES");
		    else
		    System.out.println("NO");
		}
	}
}
