import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Test{
	public static void main(String args[]){
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String in = new String();
		System.out.println("എന്തെങ്കിലും ടൈപ്പ് ചെയ്യൂ സാറേ\n");
		System.out.ptintln("DEEPU\n");

		try{
		in = br.readLine();
		}
		catch(IOException ioe){
		System.out.println (ioe.toString());		
		}

		System.out.println(in + " Biswas");

	}
}
