import java.math.BigInteger;
import java.util.Scanner;


public class Main {

	public static BigInteger fac(int n) {
		BigInteger ret = BigInteger.ONE;
		for (int i = 1; i <= n; ++ i) {
			ret = ret.multiply(new BigInteger(String.valueOf(i)));
		}
		return ret;
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		Scanner cin = new Scanner(System.in);
		int T = cin.nextInt();
		while (T -- > 0) {
			int n = cin.nextInt();
			System.out.println(Main.fac(n));
		}
	}

}
