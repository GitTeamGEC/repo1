import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

class Test{
	public static void main(String args[]){
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String in = new String();
		System.out.println("താങ്കളുടെ ഇൻപുട്ടിനായി കാത്തിരിക്കുന്നു:\n");

		try{
		in = br.readLine();
		}
		catch(IOException ioe){
		System.out.println (ioe.toString());		
		}

		System.out.println(in + " Biswas");

	}
}
