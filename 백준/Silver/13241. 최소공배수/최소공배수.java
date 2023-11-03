
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    static long A, B, C;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader((System.in)));
        StringTokenizer st = new StringTokenizer(br.readLine());
        A = Long.parseLong(st.nextToken());
        B = Long.parseLong(st.nextToken());
        if(A > B){
            C = gong(B, A);
        }else{
            C = gong(A, B);
        }
        System.out.println((A*B)/C);
    }
    public static long gong(long A, long B){
        long a = A;
        long b = B;
        while(true){
            long c = b%a;
            if(c == 0){
                return a;
            }
            b = a;
            a = c;
        }
    }
}
