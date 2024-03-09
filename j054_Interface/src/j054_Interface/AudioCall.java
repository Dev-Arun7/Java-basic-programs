package j054_Interface;

public class AudioCall implements WhatsAppCall
{
	public void call()
	{
		System.out.println("Voice call started... ");
	}
	public void mute()
	{
		System.out.println("Voice call muted...!");
	}
	public void disconnect()
	{
		System.out.println("Voice call disconnected...!");
	}
}
