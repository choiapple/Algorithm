import java.io.*;
import java.util.*;
import java.math.*;

public class Main {
	static BigInteger P, p, q, K;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		P = new BigInteger(st.nextToken());
		K = new BigInteger(st.nextToken());
		p = new BigInteger("2");
		BigInteger one = new BigInteger("1");
		while(p.compareTo(K) == -1) {
			if(P.remainder(p).equals(BigInteger.ZERO)) {
				System.out.println("BAD " + p);
				return;
			}
			p = p.add(one);
		}
		System.out.println("GOOD");
	}

}
