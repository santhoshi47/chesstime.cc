import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,x,y,z;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    x=s.nextInt();
		    y=s.nextInt();
		    z=s.nextInt();
		    if(y/x>z)
		    System.out.println("0");
		    else
		    System.out.println(z-(y/x));
		    
		
	}
}}
