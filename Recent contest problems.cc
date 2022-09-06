import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
int t,n;
String N;
Scanner s=new Scanner(System.in);
t=s.nextInt();
for(int i=0;i<t;i++)
{
    n=s.nextInt();
    int count=0,countw=0;
    for(int j=0;j<n;j++)
    {
    N=s.next();
    if(N.equals("START38")){
    count++;
      }
    else if(N.equals("LTIME108")){
    countw++;
    }
    
}
System.out.println(count+" "+countw);
}
}}
