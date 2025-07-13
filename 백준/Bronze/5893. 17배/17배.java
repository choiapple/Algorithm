import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.math.BigInteger;

public class Main {

	public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String binaryInput = br.readLine();

        BigInteger number = new BigInteger(binaryInput, 2); // 이진수 → 십진수
        BigInteger result = number.multiply(BigInteger.valueOf(17)); // 17배
        System.out.println(result.toString(2)); // 십진수 → 이진수 출력
    }

}
