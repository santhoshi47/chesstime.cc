class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
int t,a1,a2,a3,a4,a5,a6,a7;
Scanner s=new Scanner(System.in);
	    t=s.nextInt();
	    for(int i=0;i<t;i++)
	    {
	        a1=s.nextInt();
	        a2=s.nextInt();
	        a3=s.nextInt();
	        a4=s.nextInt();
	        a5=s.nextInt();
	        a6=s.nextInt();
	        a7=s.nextInt();
	        if(a1+a2+a3+a4+a5+a6+a7>=4)
	        System.out.println("yes");
	        else
	        System.out.println("no");
	    }
	}
}
