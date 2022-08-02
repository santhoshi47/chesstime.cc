import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
     int t,x1,x2,y1,y2,a;
     Scanner s=new Scanner(System.in);
     t=s.nextInt();
     for(int i=0;i<t;i++)
     {
         x1=s.nextInt();
         x2=s.nextInt();
         y1=s.nextInt();
         y2=s.nextInt();
         x1=Math.abs(x1-y1);
         x2=Math.abs(x2-y2);
         a=Math.max(x1,x2);
         System.out.println(Math.abs(a));
     }
}
}
