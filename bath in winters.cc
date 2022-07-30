import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,x,y;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    x=s.nextInt();
		    y=s.nextInt();
		    y=y*2;
		    if(x>=y)
		    System.out.println(x/y);
		    else
		    System.out.println("0");
		}
	}
}
