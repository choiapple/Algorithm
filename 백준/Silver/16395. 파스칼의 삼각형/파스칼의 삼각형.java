import java.util.*;
import java.io.*;

public class Main {
	
	static int N, K, answer, tmp;
	static int[][] map;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        K = Integer.parseInt(st.nextToken());
        map = new int[N+1][2*N];
        if(K == 1){
            System.out.println(1);
        }else{
            map[1][N] = 1;
            map[2][N - 1] = 1;
            map[2][N + 1] = 1;
            for(int i=3; i<=N; i++) {
            	for(int j=N-i+1; j<N+i; j+=2) {
            		if(j == N-i+1 || j == N+i-1) {
            			map[i][j] = 1;
            		}else {
            			map[i][j] = map[i-1][j-1] + map[i-1][j+1];
            		}
            	}
            }
    	    tmp = 1;
    	    for(int j=+1; j<2*N; j+=2) {
    		    if(tmp == K) {
    			    answer = map[N][j];
    		    }
    		    tmp++;
    	    }
    	    System.out.println(answer);
        }
        
    }

}
