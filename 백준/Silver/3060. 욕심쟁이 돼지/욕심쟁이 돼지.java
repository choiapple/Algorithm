
import java.util.*;
import java.io.*;

public class Main {
	static int T;
	static long N;
	static long[] pig;
	static long[] pig2;
	static StringTokenizer st;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		T = Integer.parseInt(br.readLine());
		pig = new long[7];
		pig2 = new long[7];
		for(int i=0; i<T; i++) {
			N = Integer.parseInt(br.readLine());
			st = new StringTokenizer(br.readLine());
			for(int j=0; j<6; j++) {
				pig[j] = Integer.parseInt(st.nextToken());
			}
			int answer = 1;
			while(true) {
				long tmp = 0;
				for(int j=0; j<6; j++) {
					tmp += pig[j];
				}
				if(tmp > N) {
					break;
				}
				for(int j=0; j<6; j++) {
					pig2[j] = pig[j];
				}
				for(int j=0; j<6; j++) {
					long tmp2 = pig2[j];
					if(j-1 < 0) {
						tmp2 += pig2[5];
					}else {
						tmp2 += pig2[j-1];
					}
					if(j+1 > 5) {
						tmp2 += pig2[0];
					}else {
						tmp2 += pig2[j+1];
					}
					int x = (j+3)%6;
					tmp2 += pig2[x];
					pig[j] = tmp2;
				}
				answer++;
			}
			System.out.println(answer);
		}

	}

}
