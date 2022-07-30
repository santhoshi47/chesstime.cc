import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n,m;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    n=s.nextInt();
		    m=s.nextInt();
		    if(n<=m)
		    System.out.println(n*2-n);
		    else
		    System.out.println(n*2-m);
		}
	}
}
