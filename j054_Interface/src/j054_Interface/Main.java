package j054_Interface;

public class Main
{
	public static void main(String args[])
	{
	AudioCall a = new AudioCall();
	VideoCall v = new VideoCall();
	a.call();
	a.mute();
	a.disconnect();
	System.out.println("\n");
	v.call();
	v.mute();
	v.disconnect();
	}
}
