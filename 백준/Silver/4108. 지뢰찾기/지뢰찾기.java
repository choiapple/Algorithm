import java.util.*;
import java.io.*;

public class Main {
	static int R, C;
	static char[][] map = new char[101][101];
	static int[] dy = {0, -1, -1, -1, 0, 1, 1, 1};
	static int[] dx = {-1, -1, 0, 1, 1, 1, 0, -1};
	static StringTokenizer st;
	static StringBuilder sb = new StringBuilder();
	static String s;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		while(true) {
			st = new StringTokenizer(br.readLine());
			R = Integer.parseInt(st.nextToken());
			C = Integer.parseInt(st.nextToken());
			if(R == 0 && C == 0) break;
			for(int i=0; i<R; i++) {
				s = br.readLine();
				for(int j=0; j<C; j++) {
					map[i][j] = s.charAt(j);
				}
			}
			for(int i=0; i<R; i++) {
				for(int j=0; j<C; j++) {
					if(map[i][j] == '*') {
						sb.append('*');
					}else {
						sb.append(check(i, j));
					}
				}
				sb.append('\n');
			}
		}
		System.out.println(sb);
	}
	public static int check(int y, int x) {
		int cnt = 0;
		for(int i=0; i<8; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= R || nx < 0 || nx >= C) continue;
			if(map[ny][nx] == '*') cnt++;
		}
		return cnt;
	}

}