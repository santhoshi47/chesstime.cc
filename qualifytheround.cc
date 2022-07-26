import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,x,a,b;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++){
		    x=s.nextInt();
		    a=s.nextInt();
		    b=s.nextInt();
		    if(x<=a*1+b*2)
		    System.out.println("Qualify");
		    else
		    System.out.println("NotQualify");
		}
	}
}
