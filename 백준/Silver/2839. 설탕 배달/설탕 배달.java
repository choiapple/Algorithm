
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Main {
	static int N;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		if(N%5 == 0) {
			System.out.println(N/5);
		}else {
			int cnt = N/5;
			while(cnt >= 0) {
				if((N-(cnt*5))%3 == 0) {
					System.out.println(cnt + ((N-(cnt*5))/3));
					break;
				}else {
					cnt--;
				}
			}
			if(cnt == -1) {
				System.out.println(-1);
			}
		}
		

	}

}
