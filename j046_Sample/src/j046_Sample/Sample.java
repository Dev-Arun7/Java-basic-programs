package j046_Sample;

public class Sample 
{
	public static void main(String[] args) 
	{
		SmartPhone phone1 = new SmartPhone();
		phone1.brand = "Apple";
		phone1.model = "i Phone 12";
		phone1.price = 50000;
		
		
		System.out.println("------------Phone 1---------------");
		System.out.println("Brand: "+ phone1.brand);
		System.out.println("Model: "+ phone1.model);
		System.out.println("Price: "+ phone1.price);
		phone1.call();
		String text = "Hi Arun";
		phone1.message(text);
		SmartPhone.message();
		System.out.println();
		System.out.println();
		System.out.println();
		
		
				
		SmartPhone phone2 = new SmartPhone();
		phone2.brand = "Samsung";
		phone2.model = "Galaxy S23";
		phone2.price = 80000;
		
		
		System.out.println("------------Phone 2---------------");
		System.out.println("Brand: "+ phone2.brand);
		System.out.println("Model: "+ phone2.model);
		System.out.println("Price: "+ phone2.price);
		phone2.call();
		System.out.println();
		System.out.println();
		System.out.println();
		
			
		SmartPhone phone3 = new SmartPhone();
		phone3.brand = "Realme";
		phone3.model = "GT Master Edition";
		phone3.price = 30000;

		
		System.out.println("------------Phone 3---------------");
		System.out.println("Brand: "+ phone3.brand);
		System.out.println("Model: "+ phone3.model);
		System.out.println("Price: "+ phone3.price);
		phone3.call();
		System.out.println();
		System.out.println();
		System.out.println();
		
		
	}

}
