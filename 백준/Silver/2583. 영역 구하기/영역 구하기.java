import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static int M, N, K;
    static int[][] map;
    static int[][] visit;
    static Queue<Bin> q;
    static List<Integer> answer = new ArrayList<>();
    static int[] dx = {-1, 0, 1, 0};
    static int[] dy = {0, -1, 0, 1};
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        M = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        map = new int[M+1][N+1];
        visit = new int[M+1][N+1];
        for(int i=0; i<K; i++){
            st = new StringTokenizer(br.readLine());
            int x1 = Integer.parseInt(st.nextToken());
            int y1 = Integer.parseInt(st.nextToken());
            int x2 = Integer.parseInt(st.nextToken());
            int y2 = Integer.parseInt(st.nextToken());
            for(int j=y1; j<y2; j++){
                for(int k=x1; k<x2; k++){
                    map[j][k] = 1;
                }
            }
        }
        q = new ArrayDeque<>();
        for(int i=0; i<M; i++){
            for(int j=0; j<N; j++){
                if(map[i][j] == 0 && visit[i][j] == 0){
                    bfs(i, j);
                }
            }
        }
        answer.sort((a, b) -> a - b);
        System.out.println(answer.size());
        for(int i=0; i<answer.size(); i++){
            System.out.print(answer.get(i) + " ");
        }
    }
    static void bfs(int i, int j){
        int tmp = 1;
        q.add(new Bin(i, j));
        visit[i][j] = 1;
        while(!q.isEmpty()){
            int x = q.peek().x;
            int y = q.peek().y;
            q.poll();
            for(int k=0; k<4; k++){
                int nx = x + dx[k];
                int ny = y + dy[k];
                if(nx < 0 || nx >= N || ny <0 || ny >= M) continue;
                if(visit[ny][nx] == 1 || map[ny][nx] == 1) continue;
                visit[ny][nx] = 1;
                tmp++;
                q.add(new Bin(ny, nx));
            }
        }
        answer.add(tmp);
    }
    static class Bin{
        int y, x;
        public Bin(int y, int x){
            this.y = y;
            this.x = x;
        }
    }
}
