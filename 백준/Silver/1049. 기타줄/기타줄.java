

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {

    static int N, M, s, o;
    static Line[] lines;
    static int[] visit;
    static int answer;
    static StringTokenizer st;
    public static void main(String[] args) throws IOException{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        st = new StringTokenizer(br.readLine());
        N = Integer.parseInt(st.nextToken());
        M = Integer.parseInt(st.nextToken());
        lines = new Line[M+1];
        visit = new int[M+1];
        answer = 0;
        for(int m=0; m<M; m++){
            st = new StringTokenizer(br.readLine());
            s = Integer.parseInt(st.nextToken());
            o = Integer.parseInt(st.nextToken());
            lines[m] = new Line(s, o);
        }
        while(N > 0){
            if(N >= 6){
                int tmp = findOne();
                int tmp2 = findSix2();
                if(tmp*6 < tmp2){
                    answer += tmp*6;
                }else{
                    answer += tmp2;
                }
                N -= 6;
            }else{
                int tmp = findOne();
                int tmp2 = findSix2();
                if(tmp*N < tmp2){
                    answer += tmp*N;
                }else{
                    answer += tmp2;
                }
                N -= N;
            }
        }
        System.out.println(answer);
    }
    static int findOne(){
        int flag = 1001;
        int index = 0;
        for(int i=0; i<M; i++){
            if(flag > lines[i].one){
                flag = lines[i].one;
                index = i;
            }
        }
        return flag;
    }
    static void findSix(){
        int flag = 1001;
        int index = 0;
        for(int i=0; i<M; i++){
            if(flag > lines[i].six){
                flag = lines[i].six;
                index = i;
            }
        }
        N -= 6;
        answer += flag;
    }
    static int findSix2(){
        int flag = 1001;
        int index = 0;
        for(int i=0; i<M; i++){
            if(flag > lines[i].six){
                flag = lines[i].six;
                index = i;
            }
        }
        return flag;
    }

    static class Line{
        int six;
        int one;
        public Line(int six, int one){
            this.six = six;
            this.one = one;
        }
    }
}
