import java.util.*;
import java.io.*;

public class Main {
	static int N1, N2, T;
	static char[] S1, S2;
	static char[] answer;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer(br.readLine());
		N1 = Integer.parseInt(st.nextToken());
		N2 = Integer.parseInt(st.nextToken());
		String s1 = br.readLine();
		String s2 = br.readLine();
		T = Integer.parseInt(br.readLine());
		S1 = new char[N1];
		S2 = new char[N2];
		answer = new char[N1+N2];
		for(int i=0; i<N1; i++) {
			S1[i] = s1.charAt(i);
		}
		for(int i=0; i<N2; i++) {
			S2[i] = s2.charAt(i);
		}
		int cnt = 0;
		for(int i=N1-1; i>=0; i--) {
			answer[cnt++] = S1[i];
		}
		for(int i=0; i<N2; i++) {
			answer[cnt++] = S2[i];
		}
		int ti = 0;
		for(int t=0; t<T; t++) {
			for(int i=0; i<N1+N2-1; i++) {
				if(check(answer[i], answer[i+1])) {
					char tmp = answer[i];
					answer[i] = answer[i+1];
					answer[i+1] = tmp;
					i++;
				}
			}
		}
		for(int i=0; i<N1+N2; i++) {
			System.out.print(answer[i]);
		}
	}
	static boolean check(char pre, char nex) {
		int l = 0;
		int r = 0;
		for(int i=0; i<N1; i++) {
			if(S1[i] == pre) {
				l++;
				break;
			}
		}
		for(int i=0; i<N2; i++) {
			if(S2[i] == nex) {
				r++;
				break;
			}
		}
		if(l == 1 && r == 1) {
			return true;
		}else {
			return false;
		}
	}

}
