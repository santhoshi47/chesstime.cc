
import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
       int t,x,y,X,Y;
       Scanner s=new Scanner(System.in);
       t=s.nextInt();
       for(int i=0;i<t;i++)
       {
           x=s.nextInt();
           y=s.nextInt();
           X=(x-1)/10;
           Y=(y-1)/10;
           System.out.println(Math.abs(X-Y));
       }
}
}
