import java.io.*;
import java.util.*;
import java.math.*;

public class Main {
	static int n;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
		BigInteger[] arr = new BigInteger[500];
		arr[0] = BigInteger.ZERO;
		arr[1] = BigInteger.ONE;
		for(int i=2; i<=490; i++) {
			arr[i] = arr[i-2].add(arr[i-1]);
		}
		while(true) {
			n = Integer.parseInt(br.readLine());
			if(n == -1) break;
			bw.write("Hour " + n + ": " + arr[n] + " cow(s) affected\n");
		}
		bw.close();
	}
}