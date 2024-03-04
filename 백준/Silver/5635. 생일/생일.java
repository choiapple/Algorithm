import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.StringTokenizer;

public class Main {
    static int n;
    static List<Person> person;
    static String name;
    static int d, m, y;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        n = Integer.parseInt(st.nextToken());
        person = new ArrayList<Person>();
        for(int i=0; i<n; i++){
            st = new StringTokenizer(br.readLine());
            name = st.nextToken();
            d = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());
            y = Integer.parseInt(st.nextToken());
            person.add(new Person(name, d, m, y));
        }
        person.sort((a, b) -> {
            if(a.yy != b.yy){
                return a.yy - b.yy;
            }else{
                if(a.mm != b.mm){
                    return a.mm - b.mm;
                }else{
                    return a.dd - b.dd;
                }
            }
        });
        System.out.println(person.get(n-1).name);
        System.out.println(person.get(0).name);
    }

    static class Person {
        String name;
        int dd, mm, yy;
        Person(String name, int dd, int mm, int yy){
            this.name = name;
            this.dd = dd;
            this.mm = mm;
            this.yy = yy;
        }
    }
}
