import java.util.*;
import java.io.*;

public class Main {
	static int T, M, N, x, y, flag;
	static StringBuilder sb = new StringBuilder();
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		T = Integer.parseInt(br.readLine());
		for(int i=0; i<T; i++) {
			StringTokenizer st = new StringTokenizer(br.readLine());
			M = Integer.parseInt(st.nextToken());
			N = Integer.parseInt(st.nextToken());
			x = Integer.parseInt(st.nextToken()) - 1;
			y = Integer.parseInt(st.nextToken()) - 1;
			flag = 0;
			for(int j=x; j<(M*N); j+=M) {
				if(j%N == y) {
					flag = 1;
					sb.append(j+1).append('\n');
					break;
				}
			}
			if(flag == 0) {
				sb.append(-1).append('\n');	
			}
		}
		System.out.println(sb);

	}

}
