import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int t,n,na,nb,nc,nd,a,b;
	    Scanner s =new Scanner(System.in);
	    t=s.nextInt();
	    for(int i=0;i<t;i++)
	    {
	        n=s.nextInt();
	        na=s.nextInt();
	        nb=s.nextInt();
	        nc=s.nextInt();
	        nd=s.nextInt();
	        if(n==na+nb+nc+nd)
	        na=Math.max(na,nb);
	        nc=Math.max(nc,nd);
	        System.out.println(Math.max(na,nc));
	    }
	}
	
}
