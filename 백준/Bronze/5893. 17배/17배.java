import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		BigInteger bi = BigInteger.ZERO;
		BigInteger one = new BigInteger("1");
		BigInteger two = new BigInteger("2");
		String answer = "";
		int len = s.length();
		for(int i=len-1; i>=0; i--) {
			bi = bi.add(one.multiply(new BigInteger(s.charAt(i) + "")));
			one = one.multiply(two);
		}
		bi = bi.multiply(new BigInteger("17"));
		while(bi.compareTo(BigInteger.ZERO) == 1) {
			answer += bi.remainder(two);
			bi = bi.divide(two);
		}
		for(int i=answer.length()-1; i>=0; i--) {
			System.out.print(answer.charAt(i));
		}
	}

}
