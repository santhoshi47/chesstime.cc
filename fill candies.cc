import java.util.*;
import java.lang.*;
import java.io.*;


class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int t,n,k,m,g;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		    for(int i=0;i<t;i++){
		        n=s.nextInt();
		        k=s.nextInt();
		        m=s.nextInt();
		        g=k*m;
		        if(n%g==0)
		        System.out.println(n/g);
		        else
		        System.out.println(n/g+1);
		       
		    
		}
	}
}
