import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,x,g;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    x=s.nextInt();
		    g=x/10;
		    if(x%10==0)
		    System.out.println(g);
		    else if(x%5==0&&x%10!=0)
		    System.out.println(g+1);
		    else
		    System.out.println("-1");
		}
	}
}
