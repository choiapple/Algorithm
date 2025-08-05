import java.util.*;
import java.io.*;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		int len = s.length();
		if(len >= 5 && s.substring(len-5).equals("driip")) {
			System.out.println("cute");
		}else {
			System.out.println("not cute");
		}
	}

}
