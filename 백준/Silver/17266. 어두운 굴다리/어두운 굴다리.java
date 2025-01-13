import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int N, M, dis, pre, tmp, cur;
	static StringTokenizer st;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		M = Integer.parseInt(br.readLine());
		st = new StringTokenizer(br.readLine());
		dis = 0;
		pre = 0;
		for(int m=0; m<M; m++) {
			cur = Integer.parseInt(st.nextToken());
			tmp = cur - pre;
			if(m == 0) {
				dis = Math.max(tmp, dis);
			}else {
				if(tmp % 2 == 0) {
					dis = Math.max(tmp/2, dis);
				}else {
					dis = Math.max(tmp/2 + 1, dis);
				}
			}
			pre = cur;
		}
		dis = Math.max(N - pre, dis);
		System.out.println(dis);
	}
}