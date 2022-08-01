import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n,x,k;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++){
		    n=s.nextInt();
		    x=s.nextInt();
		    k=s.nextInt();
		    if(k/x<n)
		    System.out.println(k/x);
		    else if(k/x>n)
		    System.out.println(n);
		    else if(k/x==0)
		    System.out.println("0");
		    
		}
	}
}

