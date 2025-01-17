import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	static int T, N, max_n, idx, total_n, cnt;
	static int[] arr;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		T = Integer.parseInt(br.readLine());
		arr = new int[11];
		for(int t=0; t<T; t++) {
			N = Integer.parseInt(br.readLine());
			max_n = 0;
			total_n = 0;
			for(int n=1; n<=N; n++) {
				arr[n] = Integer.parseInt(br.readLine());
				if(max_n < arr[n]) {
					max_n = arr[n];
					idx = n;
					cnt = 1;
				}else if(max_n == arr[n]) {
					cnt++;
				}
				total_n += arr[n];
			}
			if(cnt > 1) {
				System.out.println("no winner");
				continue;
			}
			if(max_n <= total_n/2) {
				System.out.println("minority winner " + idx);
			}else {
				System.out.println("majority winner " + idx);
			}
		}

	}

}
