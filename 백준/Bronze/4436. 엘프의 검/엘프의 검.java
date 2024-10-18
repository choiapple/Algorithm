
import java.util.*;
import java.io.*;

public class Main {
	static Long N, tmp;
	static String s;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while((s = br.readLine()) != null) {
			N = Long.parseLong(s);
			Set<Long> set = new HashSet<>();
			for(long i=0; i<10; i++) {
				set.add(i);
			}
			int k = 1;
			while(true) {
				tmp = k * N;
				while(tmp > 0) {
					set.remove(tmp%10);
					tmp/=10;
				}
				if(set.isEmpty()) {
					break;
				}
				k++;
			}
			System.out.println(k);
		}

	}

}
