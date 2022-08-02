import java.util.*;
import java.lang.*;
import java.io.*;
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int t,n;
		Scanner s=new Scanner(System.in);
		t=s.nextInt();
		    for(int i=0;i<t;i++){
		        int count=0;
		    n=s.nextInt();
		    int a[]=new int[n];
		    for(int j=0;j<n;j++)
		    {
		        a[j]=s.nextInt();
		    }
		    for(int j=0;j<n;j++){
		        if(a[j]>=10&&a[j]<=60)
		        count++;
		        
		    		}System.out.println(count);

	}
		
	}
}
