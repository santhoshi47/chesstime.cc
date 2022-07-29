import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
    public static void practice(int pa,int pb,int qa,int qb)
    {
        int p=Math.max(pa,pb);
        int q=Math.max(qa,qb);
        if(p>q)
        System.out.println("Q");
        else if(q>p)
        System.out.println("P");
        else
        System.out.println("TIE");
    }
	public static void main (String args[]) throws java.lang.Exception
	{
		int t,pa,pb,qa,qb;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		for(int i=0;i<t;i++)
		{
		    pa=s.nextInt();
		    pb=s.nextInt();
		    qa=s.nextInt();
		    qb=s.nextInt();
		    practice(pa,pb,qa,qb);
		   
		}
	}

}
