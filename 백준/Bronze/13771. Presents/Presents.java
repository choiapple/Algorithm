import java.util.*;
import java.io.*;

class Main {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N;
        N = Integer.parseInt(br.readLine());
        double[] arr = new double[N];
        for(int n=0; n<N; n++){
            arr[n] = Double.parseDouble(br.readLine());
        }
        Arrays.sort(arr);
        System.out.printf("%.2f", arr[1]);
    }
}