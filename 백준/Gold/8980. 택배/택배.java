import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.*;

public class Main {
    static int N, C, M;
    static Truck[] trucks;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        C = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(br.readLine());
        trucks = new Truck[M+1];
        for(int i=1; i<=M; i++){
            st = new StringTokenizer(br.readLine());
            int start = Integer.parseInt(st.nextToken());
            int end = Integer.parseInt(st.nextToken());
            int box = Integer.parseInt(st.nextToken());
            trucks[i] = new Truck(start, end, box);
        }
        Arrays.sort(trucks, 1, M+1, (Truck a, Truck b) -> {
            if(a.end != b.end){
                return a.end - b.end;
            }else{
                return a.start - b.start;
            }
        });
        int[] weight = new int[N+1];
        for(int i=1; i<N; i++){
            weight[i] = C;
        }
        int answer = 0;
        for(int i=1; i<=M; i++){
            Truck t = trucks[i];
            int maxBoxNum = Integer.MAX_VALUE;
            for(int j = t.start; j<t.end; j++){
                maxBoxNum = Math.min(maxBoxNum, weight[j]);
            }

            if(maxBoxNum >= t.box){
                for(int j=t.start; j<t.end; j++){
                    weight[j] -= t.box;
                }
                answer += t.box;
            }else{
                for(int j=t.start; j<t.end; j++){
                    weight[j] -= maxBoxNum;
                }
                answer+= maxBoxNum;
            }
        }
        System.out.println(answer);
    }
    static class Truck{
        int start;
        int end;
        int box;
        public Truck(int start, int end, int box){
            this.start = start;
            this.end = end;
            this.box = box;
        }
    }
}
