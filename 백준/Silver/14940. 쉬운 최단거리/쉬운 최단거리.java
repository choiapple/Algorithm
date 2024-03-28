

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
	static StringTokenizer st;
	static int[][] map;
	static int[][] visit;
	static int x, y;
	static int[] dx = {-1, 0, 1, 0};
	static int[] dy = {0, -1, 0, 1};
	public static void main(String[] args) throws IOException{
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		st = new StringTokenizer(br.readLine());
		int n = Integer.parseInt(st.nextToken());
		int m = Integer.parseInt(st.nextToken());
		map = new int[n+1][m+1];
		visit = new int[n][m];
		for(int i=0; i<n; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j=0; j<m; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
				if(map[i][j] == 2) {
					x = j;
					y = i;
					map[i][j] = 0;
				}
			}
		}
		visit[y][x] = 1;
		Queue<Area> q = new ArrayDeque<>();
		q.add(new Area(y, x));
		while(!q.isEmpty()) {
			Area A = q.poll();
			for(int i=0; i<4; i++) {
				int Ax = A.x + dx[i];
				int Ay = A.y + dy[i];
				if(Ax >= 0 && Ax < m && Ay >= 0 && Ay < n) {
					if(visit[Ay][Ax] == 0 && map[Ay][Ax] == 1) {
						visit[Ay][Ax] = 1;
						map[Ay][Ax] = map[A.y][A.x] + 1;
						q.add(new Area(Ay, Ax));
					}
				}
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				if(map[i][j] == 1 && visit[i][j] == 0) {
					map[i][j] = -1;
				}
			}
		}
		for(int i=0; i<n; i++) {
			for(int j=0; j<m; j++) {
				System.out.print(map[i][j]+" ");
			}
			System.out.println();
		}
	}
	static class Area {
		int y, x;
		Area(int y, int x){
			this.y = y;
			this.x = x;
		}
	}

}
