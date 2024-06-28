

import java.util.*;
import java.io.*;

public class Main {
	static int r, c;
	static char[][] map;
	static int[][] fire;
	static int[][] jihoon;
	
	static class Pair{
		int x, y;
		Pair(int x, int y){
			this.x = x;
			this.y = y;
		}
	}
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		r = Integer.parseInt(st.nextToken());
		c = Integer.parseInt(st.nextToken());
		
		map = new char[r][c];
		fire = new int[r][c];
		jihoon = new int[r][c];
		
		for(int i=0; i<r; i++) {
			Arrays.fill(fire[i], -1);
			Arrays.fill(jihoon[i], -1);
		}
		Queue<Pair> qF = new ArrayDeque<>();
		Queue<Pair> qJ = new ArrayDeque<>();
		
		for(int i=0; i<r; i++) {
			String s = br.readLine();
			for(int j=0; j<c; j++) {
				map[i][j] = s.charAt(j);
				
				if(map[i][j] == 'F') {
					qF.offer(new Pair(i, j));
					fire[i][j] = 0;
				}
				
				if(map[i][j] == 'J') {
					if(isEdge(i, j)) {
						System.out.println(1);
						return;
					}
					qJ.offer(new Pair(i, j));
					jihoon[i][j] = 0;
				}
			}
		}
		System.out.println(findEscape(qF, qJ));
	}
	
	public static boolean isNotRange(int x, int y) {
		if(x < 0 || x >= r || y < 0 || y >= c) return true;
		else return false;
	}
	
	public static boolean isEdge(int x, int y) {
		if(x == 0 || x == r-1 || y == 0 || y == c-1) return true;
		else return false;
	}
	
	public static String findEscape(Queue<Pair> qF, Queue<Pair> qJ) {
		int[] dx = {1, 0, -1, 0};
		int[] dy = {0, 1, 0, -1};
		
		while(!qF.isEmpty()) {
			Pair f = qF.poll();
			
			for(int k=0; k<4; k++) {
				int nx = f.x + dx[k];
				int ny = f.y + dy[k];
				
				if(isNotRange(nx, ny) || map[nx][ny] == '#' || fire[nx][ny] != -1) continue;
				
				qF.offer(new Pair(nx, ny));
				fire[nx][ny] = fire[f.x][f.y] + 1;
			}
		}
		
		while(!qJ.isEmpty()) {
			Pair j = qJ.poll();
			
			int time = jihoon[j.x][j.y] + 1;
			if(isEdge(j.x, j.y)) return String.valueOf(time);
			
			for(int k=0; k<4; k++) {
				int nx = j.x + dx[k];
				int ny = j.y + dy[k];
				
				if(isNotRange(nx, ny) || map[nx][ny] == '#' 
						|| jihoon[nx][ny] != -1 || (fire[nx][ny] != -1 && fire[nx][ny] <= time)) continue;
				
				qJ.offer(new Pair(nx, ny));
				jihoon[nx][ny] = jihoon[j.x][j.y] + 1;
					
			}
		}
		return "IMPOSSIBLE";
	}
}
