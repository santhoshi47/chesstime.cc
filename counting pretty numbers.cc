import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
          int t,l,r,j;
          Scanner s=new Scanner(System.in);
	      t=s.nextInt();
	      for(int i=0;i<t;i++){
	        l=s.nextInt();
	        r=s.nextInt();
	        int count=0;
	        for(j=l;j<=r;j++)
	        {
	        int h=j%10;
	        if(h==3||h==2||h==9)
	           count++;
	           
	       }
	       System.out.println(count);
	        }
	        
	    }
	}

