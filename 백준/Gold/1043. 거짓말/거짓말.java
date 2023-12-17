import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static int N, M;
    static int[][] map;
    static int[] knowPeople;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());

        knowPeople = new int[N+1];
        map = new int[51][51];

        st = new StringTokenizer(br.readLine());

        int k = Integer.parseInt(st.nextToken());
        for(int i=0; i<k; i++){
            int tmp = Integer.parseInt(st.nextToken());
            knowPeople[tmp] = 1;
        }

        for(int i=0; i<M; i++){
            st = new StringTokenizer(br.readLine());
            k = Integer.parseInt(st.nextToken());
            map[i][0] = k;
            for(int j=1; j<=k; j++){
                map[i][j] = Integer.parseInt(st.nextToken());
                if(knowPeople[map[i][j]] == 1){
                    map[i][0] = -1;
                }
            }
            if(map[i][0] == k) continue;
            for(int j=1; j<=k; j++){
                knowPeople[map[i][j]] = 1;
            }
        }

        for(int i=0; i<M; i++){
            for(int x=0; x<M; x++) {
                if (map[x][0] == -1) continue;
                k = map[x][0];
                for (int j = 1; j <= k; j++) {
                    if (knowPeople[map[x][j]] == 1) {
                        map[x][0] = -1;
                    }
                }
                if(map[x][0] == k) continue;
                for(int j=1; j<=k; j++){
                    knowPeople[map[x][j]] = 1;
                }
            }
        }
        int answer = 0;
        for(int i=0; i<M; i++){
            if(map[i][0] != -1){
                answer++;
            }
        }
        System.out.println(answer);
    }
}
