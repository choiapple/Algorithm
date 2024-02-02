import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {

    static int N, M, A, B, C;
    static List<List<Bridge>> bc;
    static StringTokenizer st;
    static int[] visit;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        visit = new int[N+1];
        for(int i=0; i<=N; i++){
            visit[i] = 0;
        }
        bc = new ArrayList<>();
        for(int i=0; i<=N; i++){
            List<Bridge> sbc = new ArrayList<>();
            bc.add(sbc);
        }
        for(int i=0; i<M; i++){
            st = new StringTokenizer(br.readLine());
            A = Integer.parseInt(st.nextToken());
            B = Integer.parseInt(st.nextToken());
            C = Integer.parseInt(st.nextToken());
            bc.get(A).add(new Bridge(B, C));
            bc.get(B).add(new Bridge(A, C));
        }
        for(int i=1; i<=N; i++){
            bc.get(i).sort((Bridge a, Bridge b) -> a.C - b.C);
        }
        PriorityQueue<Bridge> pq = new PriorityQueue<>((Bridge a, Bridge b) -> a.C - b.C);
        pq.add(new Bridge(1, 0));
        long answer = 0;
        long max = 0;
        while(!pq.isEmpty()){
            int b = pq.peek().B;
            int c = pq.peek().C;
            pq.poll();
            if(visit[b] == 0) visit[b] = 1;
            else continue;
            answer += c;
            max = Math.max(max, c);
            for(int i=0; i<bc.get(b).size(); i++){
                int bb = bc.get(b).get(i).B;
                int cc = bc.get(b).get(i).C;
                if(visit[bb] == 0){
                    pq.add(new Bridge(bb, cc));
                }
            }
        }
        System.out.println(answer - max);
    }

    static class Bridge{
        int B, C;
        Bridge(int B, int C){
            this.B = B;
            this.C = C;
        }
    }

}
