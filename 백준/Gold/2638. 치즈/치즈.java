import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    static int N, M;
    static int[][] map;
    static boolean[][] visited;
    static int[] dy = {-1, 0, 1, 0};
    static int[] dx = {0, -1, 0, 1};
    static ArrayList<Area> cheeseList;
    static int cheeseCnt = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        map = new int[N+1][M+1];
        cheeseList = new ArrayList<>();
        for(int i=0; i<N; i++){
            st = new StringTokenizer(br.readLine());
            for(int j=0; j<M; j++){
                map[i][j] = Integer.parseInt(st.nextToken());
                if(map[i][j] == 1){
                    cheeseList.add(new Area(i, j));
                    cheeseCnt += 1;
                }
            }
        }

        int time = 0;
        while(cheeseCnt != 0){
            time++;
            visited = new boolean[N+1][M+1];
//            dfs(0, 0);
            bfs();
            melting();
        }
        System.out.println(time);
    }

    static void melting(){
        for(int i=0; i<cheeseList.size(); i++){
            int y = cheeseList.get(i).y;
            int x = cheeseList.get(i).x;
            int cnt = 0;

            for(int j=0; j<4; j++){
                int ny = y + dy[j];
                int nx = x + dx[j];
                if(map[ny][nx] == 2){
                    cnt++;
                }
            }
            if(cnt >= 2){
                map[y][x] = 0;
                cheeseCnt--;
                cheeseList.remove(i);
                i--;
            }
        }
    }
//    static void dfs(int y, int x){
//        visited[y][x] = true;
//        map[y][x] = 2;
//
//        for(int i=0; i<4; i++){
//            int ny = y + dy[i];
//            int nx = x + dx[i];
//
//            if(nx < 0 || ny <0 || ny >= N || nx >= M) continue;
//            if(visited[ny][nx] || map[ny][nx] == 1) continue;
//
//            dfs(ny, nx);
//        }
//    }
    static void bfs(){
        Queue<Area> q = new ArrayDeque<>();
        q.add(new Area(0, 0));
        visited[0][0] = true;
        map[0][0] = 2;
        
        while(!q.isEmpty()){
            int y = q.peek().y;
            int x = q.peek().x;
            q.poll();
            
            for(int i=0; i<4; i++){
                int ny = y + dy[i];
                int nx = x + dx[i];
                
                if(nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
                if(visited[ny][nx] || map[ny][nx] == 1) continue;
                
                map[ny][nx] = 2;
                q.add(new Area(ny, nx));
                visited[ny][nx] = true;
            }
        }
    }
    static class Area{
        int y, x;
        Area(int y, int x){
            this.y = y;
            this.x = x;
        }
    }
}
