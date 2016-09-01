import java.util.Scanner;
import java.math.BigInteger;

class JULKA {
	public static void main(String[] args) {
	
		int test = 10;
		BigInteger natalia, klaudia, difference, total;
		Scanner in = new Scanner(System.in);
		
		while(test-- != 0) {
			total = in.nextBigInteger();
			difference = in.nextBigInteger();
			natalia = total.subtract(difference);
			natalia = natalia.divide(BigInteger.valueOf(2));
			klaudia = total.subtract(natalia);
			System.out.println(klaudia);
			System.out.println(natalia);
		}
		in.close();
	}
}
