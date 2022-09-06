
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
int t,n;
Scanner s=new Scanner(System.in);
	    t=s.nextInt();
	    for(int i=0;i<t;i++)
	    {
	        n=s.nextInt();
	        int[] ss=new int[n];
	        int[] dd=new int[n];
	        for(int j=0;j<n;j++)
	        {
	            ss[j]=s.nextInt();
	        }
	            for(int j=0;j<n;j++)
	            {
	            dd[j]=s.nextInt();
	            }
	            int count=0;
	            for(int j=0;j<n;j++){
	            if(ss[j]==dd[j])
	            {
	              count++;
	            }
	            
	            }
	            System.out.println(count);
}}
}
