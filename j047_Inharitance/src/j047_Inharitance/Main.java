package j047_Inharitance;

public class Main
{
	public static void main(String[] args) 
	{
		System.out.println("--------Teachers--------");
		Student s1 = new Student();
		s1.name = "Arun";
		s1.phone = 12345;
		s1.address();
		System.out.println("------------------");
		Student s2 = new Student();
		s2.name = "Akhil";
		s2.phone = 1232446;
		s2.address();
		System.out.println("\n\n\n");
		
		
		System.out.println("----------Students----------");
		Teachers t1 = new Teachers();
		t1.name = "Manu";
		t1.phone = 2882777;
		t1.address();
		System.out.println("-------------------");
		Teachers t2 = new Teachers();
		t2.name = "Nikhil";
		t2.phone = 44224;
		t2.address();
		System.out.println("\n\n\n");
		
		
		System.out.println("----------Person----------");
		Person p1 = new Person();
		p1.name = "Kiran";
		p1.phone = 432112;
		p1.address();
		System.out.println("\n\n\n");
		
		
		Staff f1 = new Staff();
		f1.name = "Rajan";
		f1.phone = 88377373;
		f1.address();
		

		
		
		
		
		
		
		
		
		
	}
	
	

}
