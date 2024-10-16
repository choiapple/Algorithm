import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map.Entry;
import java.util.StringTokenizer;

public class Main {
	static int N;
	static String[] split;
	static StringTokenizer st;
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		N = Integer.parseInt(br.readLine());
		split = br.readLine().split(" ");
		HashMap<String, Integer> map = new HashMap<>();
		for(String s : split) {
			map.put(s, 0);
		}
		
		ArrayList<String> list = new ArrayList<>();
		for(int i=0; i<N; i++) {
			list.add(br.readLine());
		}
		for(String s : list) {
			String[] popArr = s.split(" ");
			for(String value : popArr) {
				map.put(value,  map.get(value) + 1);
			}
		}
		List<Entry<String, Integer>> list2 = new ArrayList<>(map.entrySet());
		
		list2.sort((entry1, entry2) -> {
			int valueCompare = entry2.getValue().compareTo(entry1.getValue());
			if(valueCompare == 0) {
				return entry1.getKey().compareTo(entry2.getKey());
			}
			return valueCompare;
		});
		
		for(Entry<String, Integer> entry : list2) {
			System.out.println(entry.getKey() + " " + entry.getValue());
		}

	}

}
