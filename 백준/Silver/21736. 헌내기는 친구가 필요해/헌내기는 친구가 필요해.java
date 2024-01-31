import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;
import java.util.ArrayDeque;
import java.util.Queue;
import java.util.StringTokenizer;

public class Main {
    static int N, M;
    static String[] map;
    static int[] dx = {0, -1, 0, 1};
    static int[] dy = {-1, 0, 1, 0};
    static Queue<Area> q;
    static Area area;
    static int[][] visit;
    static int answer = 0;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        map = new String[N+1];
        visit = new int[N+1][M+1];
        for(int i=0; i<N; i++){
            String s = br.readLine();
            map[i] = s;
            for(int j=0; j<M; j++){
                if(map[i].charAt(j) == 'I'){
                    area = new Area(i, j);
                }
            }
        }
        q = new ArrayDeque<>();
        q.add(area);
        visit[area.y][area.x] = 1;
        while(!q.isEmpty()){
            int y = q.peek().y;
            int x = q.peek().x;
            q.poll();
            for(int i=0; i<4; i++){
                int my = y + dy[i];
                int mx = x + dx[i];
                if(my >= 0 && my < N && mx >= 0 && mx < M){
                    if(visit[my][mx] == 0 && map[my].charAt(mx) != 'X'){
                        q.add(new Area(my, mx));
                        visit[my][mx] = 1;
                        if(map[my].charAt(mx) == 'P'){
                            answer++;
                        }
                    }
                }
            }
        }
        if(answer == 0){
            System.out.println("TT");
            System.exit(0);
        }
        System.out.println(answer);
    }

    static class Area{
        int y, x;
        Area(int y, int x){
            this.y = y;
            this.x = x;
        }
    }
}