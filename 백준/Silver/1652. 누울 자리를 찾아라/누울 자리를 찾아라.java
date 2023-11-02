

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;


public class Main {
    static int N;
    static int answer = 0;
    static int answer2 = 0;
    static String[] map;
    public static void main(String[] args) throws IOException {
        BufferedReader br  = new BufferedReader(new InputStreamReader(System.in));
        N = Integer.parseInt(br.readLine());
        map = new String[N+1];
        for(int n=0; n<N; n++){
            map[n] = br.readLine();
        }
        for(int i=0; i<N; i++){
            int cnt = 0;
            int cnt2 = 0;
            for(int j=0; j<N; j++){
                if(map[i].charAt(j) == '.'){
                    cnt++;
                }else if(map[i].charAt(j) == 'X'){
                    if(cnt >= 2){
                        answer++;
                    }
                    cnt = 0;
                }
                if(map[j].charAt(i) == '.'){
                    cnt2++;
                }else if(map[j].charAt(i) == 'X'){
                    if(cnt2 >= 2){
                        answer2++;
                    }
                    cnt2=0;
                }
            }
            if(cnt >= 2){
                answer++;
            }
            if(cnt2 >= 2){
                answer2++;
            }

        }
        System.out.println(answer + " " + answer2);

    }
}
