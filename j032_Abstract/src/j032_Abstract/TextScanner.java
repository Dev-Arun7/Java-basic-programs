package j032_Abstract;

public class TextScanner 
{
	A obj;
	
	public TextScanner(A obj) 
	{
		this.obj = obj;
		
		
	}
	
	void scan()
	{
		obj.onText("Scanner Text");
	}

}
 