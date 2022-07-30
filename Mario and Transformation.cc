import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int t,x=1;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    x=s.nextInt();
		   
		   if(x%3==0)
		    System.out.println("normal");
		    else if(x%3==1)
		    System.out.println("huge");
		    else if(x%3==2)
		    System.out.println("small");
		    
		}
	}
}
