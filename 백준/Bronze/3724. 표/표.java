import java.io.*;
import java.util.*;
import java.math.*;
public class Main{
    static int c, r, tc;
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine());
        tc = Integer.parseInt(st.nextToken());
        while(tc-- > 0){
            st = new StringTokenizer(br.readLine());
            c = Integer.parseInt(st.nextToken());
            r = Integer.parseInt(st.nextToken());
            BigInteger[] arr = new BigInteger[c];
            for(int i=0; i<c; i++){
                // BigInteger는 클래스와 같음
                arr[i] = BigInteger.ONE; // 1로 초기화
            }
            while(r-- > 0){
                st = new StringTokenizer(br.readLine());
                for(int i=0; i < c; i++){
                    arr[i] = arr[i].multiply(new BigInteger(st.nextToken())); // BigIntegr는 클래스에 제공하는 연산을 사용해야함
                }
            }
            BigInteger max = arr[0];
            int maxIdx = 0;
            for(int i=1; i < c; i++){
                if(max.compareTo(arr[i]) <= 0){ // BigIntegr는 클래스에 제공하는 연산을 사용해야함
                    max = arr[i];
                    maxIdx = i;
                }
            }
            System.out.println(maxIdx+1);
        }
    }
}