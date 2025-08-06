import java.io.*;
import java.util.*;

public class Main {
	
	public static void main(String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String s = br.readLine();
		String answer = "";
		char fi = 'Z';
		int len = s.length(), flag = 0;
		for(int i=0; i<3; i++) {
			char c = (char)('A' + i);
			for(int j=0; j<len; j++) {
				if(s.charAt(j) == c) {
					fi = c;
					flag = 1;
				}
			}
			if(flag == 1) {
				for(int j=0; j<len; j++) {
					if(s.charAt(j) >= fi && s.charAt(j) <= 'F' && s.charAt(j) != 'E') {
						answer += c;
					}else {
						answer += s.charAt(j);
					}
				}
				break;
			}
		}
		if(flag == 0) {
			for(int j=0; j<len; j++) {
				answer += 'A';
			}
		}
		System.out.println(answer);
	}

}
