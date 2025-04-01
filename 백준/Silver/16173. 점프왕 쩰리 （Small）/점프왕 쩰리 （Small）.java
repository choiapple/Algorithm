import java.util.*;
import java.io.*;

public class Main {
	static int N, flag;
	static int[][] map;
	static boolean[][] check;
	static StringTokenizer st;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		map = new int[N+1][N+1];
		check = new boolean[N+1][N+1];
		for(int i=0; i<N; i++) {
			st = new StringTokenizer(br.readLine());
			for(int j=0; j<N; j++) {
				map[i][j] = Integer.parseInt(st.nextToken());
			}
		}
		flag = 0;
		Queue<Jelly> q = new ArrayDeque<>();
		q.offer(new Jelly(0, 0));
		check[0][0] = true;
		while(!q.isEmpty()) {
			int x = q.peek().x;
			int y = q.peek().y;
			q.poll();
			if(x == N-1 && y == N-1) {
				flag = 1;
				break;
			}
			if(x + map[x][y] < N && !check[x+map[x][y]][y]) {
				check[x+map[x][y]][y] = true;
				q.offer(new Jelly(x + map[x][y], y));
			}
			if(y + map[x][y] < N && !check[x][y+map[x][y]]) {
				check[x][y+map[x][y]] = true;
				q.offer(new Jelly(x, y+map[x][y]));
			}
		}
		if(flag == 1) System.out.println("HaruHaru");
		else System.out.println("Hing");
	}
	static class Jelly {
		int x, y;
		Jelly(int x, int y){
			this.x = x;
			this.y = y;
		}
	}
}