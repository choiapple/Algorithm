import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static int N, min, res;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        N = Integer.parseInt(br.readLine());
        min = Integer.MAX_VALUE;
        res = 0;

        st = new StringTokenizer(br.readLine());
        for(int i = 0; i < N; i++){
            int cur = Integer.parseInt(st.nextToken());

            res = Math.max(res, cur - min);
            min = Math.min(min, cur);
        }
        System.out.println(res);

    }

}
