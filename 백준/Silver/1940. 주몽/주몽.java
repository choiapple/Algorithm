import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {

    static int N, M;
    static int[] arr;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        M = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        arr = new int[N];
        for(int n=0; n<N; n++){
            arr[n] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        int sta = 0;
        int en = N-1;
        int answer = 0;
        while(true){
            if(sta >= en){
                break;
            }
            int tmp = arr[sta] + arr[en];
            if(tmp == M){
                answer++;
                sta++;
            }else if(tmp > M){
                en--;
            }else{
                sta++;
            }
        }
        System.out.println(answer);
    }
}
