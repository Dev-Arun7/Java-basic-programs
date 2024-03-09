package j054_Interface;

public class VideoCall implements WhatsAppCall
{
	public void call()
	{
		System.out.println("Video call started... ");
	}
	public void mute()
	{
		System.out.println("Video call muted...!");
	}
	public void disconnect()
	{
		System.out.println("Video call disconnected...!");
	}

}
