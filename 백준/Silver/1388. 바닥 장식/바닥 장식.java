import java.io.*;
import java.util.*;

public class Main {
	static int N, M;
	static char[][] map;
	static int[][] visit;
	static int answer;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N = Integer.parseInt(st.nextToken());
		M = Integer.parseInt(st.nextToken());
		map = new char[N][M];
		visit = new int[N][M];
		answer = 0;
		String s;
		for(int n=0; n<N; n++) {
			s = br.readLine();
			for(int m=0; m<M; m++) {
				map[n][m] = s.charAt(m);
				visit[n][m] = 0;
			}
		}
		for(int n=0; n<N; n++) {
			for(int m=0; m<M; m++) {
				if(visit[n][m] == 0 && map[n][m] == '-') {
					row(n, m);
					answer++;
				}else if(visit[n][m] == 0 && map[n][m] == '|') {
					column(n, m);
					answer++;
				}
			}
		}
		System.out.println(answer);
	}
	public static void row(int n, int m) {
		visit[n][m] = 1;
		if(m+1 >= M) return;
		if(visit[n][m+1] == 1) return;
		if(map[n][m+1] == '-') row(n, m+1);
	}
	public static void column(int n, int m) {
		visit[n][m] = 1;
		if(n+1 >= N) return;
		if(visit[n+1][m] == 1) return;
		if(map[n+1][m] == '|') column(n+1, m);
	}
}
