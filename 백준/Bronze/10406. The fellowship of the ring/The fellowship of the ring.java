import java.util.*;
import java.lang.*;
import java.io.*;

class Main {
    public static int W, N, P, tmp, answer = 0;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        W = Integer.parseInt(st.nextToken());
        N = Integer.parseInt(st.nextToken());
        P = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        for(int p=0; p<P; p++){
            tmp = Integer.parseInt(st.nextToken());
            if(W <= tmp && tmp <= N) answer++;
        }
        System.out.println(answer);
    }
}