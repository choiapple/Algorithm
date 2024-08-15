import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
	static int T, tmp;
	static String x, y;
	static StringTokenizer st;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		st = new StringTokenizer(br.readLine());
		T = Integer.parseInt(st.nextToken());
		for(int i=0; i<T; i++) {
			st = new StringTokenizer(br.readLine());
			x = st.nextToken();
			y = st.nextToken();
			int len = x.length();
			System.out.print("Distances:");
			for(int j=0; j<len; j++) {
				char xx = x.charAt(j);
				char yy = y.charAt(j);
				if(yy < xx) {
					tmp = yy + 26 - xx;
				}else {
					tmp = yy - xx;
				}
				System.out.print(" " + tmp);
			}
			System.out.println();
		}
	}

}
