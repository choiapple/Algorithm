import java.io.*;
import java.util.Stack;
import java.util.StringTokenizer;

public class Main {
    static int N;
    static int[] arr;
    static int[] answer;
    static Stack<Integer> sta;
    static StringTokenizer st;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        StringBuilder sb = new StringBuilder();
        N = Integer.parseInt(br.readLine());
        arr = new int[N+1];
        answer = new int[N+1];
        sta = new Stack<Integer>();
        st = new StringTokenizer(br.readLine());
        for(int i=0; i<N; i++){
            arr[i] = Integer.parseInt(st.nextToken());
        }

        for(int i=N-1; i>=0; i--){
            while(!sta.empty() && sta.peek() <= arr[i]){
                sta.pop();
            }

            if(sta.empty()){
                answer[i] = -1;
            }else{
                answer[i] = sta.peek();
            }
            sta.push(arr[i]);
        }
        for(int i=0; i<N; i++){
            sb.append(answer[i]);
            sb.append(" ");
        }
        bw.write(sb.toString());
        bw.flush();
        bw.close();
    }
}
