import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int t,n,k,x,y;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		    for(int i=0;i<t;i++)
		    {n=s.nextInt();
		    k=s.nextInt();
		    x=s.nextInt();
		    y=s.nextInt();
		    if(n==k)
		    System.out.println(k*x);
		    else if(x<y)
		    System.out.println(n*x);
		    else
		    System.out.println(k*x+(n-k)*y);
		        
		    }
		}
	}

