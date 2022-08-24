class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
int t,a,b;
Scanner s=new Scanner(System.in);
	    t=s.nextInt();
	    for(int i=0;i<t;i++)
	    {
	        a=s.nextInt();
	        b=s.nextInt();
	        if((a%2==0&&b%2==0)||(a%2!=0&&b%2!=0))
	        System.out.println("YES");
	        else
	        System.out.println("NO");
	    }
	}
}


if either a and b are even(or)either a and b or odd then only we will be able to equalize.
