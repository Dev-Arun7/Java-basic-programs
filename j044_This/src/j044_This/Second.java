package j044_This;

public class Second 
{
	int a=100, b=400;
	Second(int a, int b)
	{
		a = this.a;    // this.a = global variable a.
		b = this.b;    // this.b = global variable b.
		System.out.println(" a and b is  "+a+"  "+b);
		System.out.println(" a and b is  "+this.a+"  "+this.b);
	}
	
	
}
