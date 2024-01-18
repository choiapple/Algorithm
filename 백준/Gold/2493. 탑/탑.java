

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class Main {
	static Stack<int[]> stack = new Stack<>();
	static int N;
	static StringBuilder sb = new StringBuilder();
	
	public static void main(String[] args) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = read();
		
//		StringTokenizer st = new StringTokenizer(br.readLine());
		
		for(int i=1; i<=N; i++) {
			int height = read();
			
			// 현재 탑 기준으로 stack 에 들어가 있는 이전 탑을 꺼내어서 비교
			// 만약 이전 탑이 현재 탑보다 크다면 현재 탑의 답이 된다.
			// 이전 탑이 더 작으면 꺼내서 버려버린다.
			while(!stack.isEmpty()) {
				if(stack.peek()[1] > height) {
					sb.append(stack.peek()[0]).append(" "); // 찾았다.
					break;
				}else {
					stack.pop();
				}
			}
			if(stack.isEmpty()) sb.append("0 ");
			stack.push(new int[] {i, height});
		}
		System.out.println(sb.toString());
	}

	static int read() throws Exception{
		int d, o = System.in.read() & 15;
		while((d=System.in.read())>32) o = (o<<3)+(o<<1)+(d&15);
		return o;
	}
}
