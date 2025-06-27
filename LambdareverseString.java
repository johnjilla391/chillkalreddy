import java.util.function.Function;
import java.util.Scanner;

public class  LambdareverseString {
	public static void main(String args[]) {
		Function<String, String> reverseString= str-> new StringBuilder(str).reverse().toString();
		
		Scanner sc= new Scanner(System.in);
		System.out.print("Enter a String: ");
		String input= sc.next();
		
		System.out.println("Original String: "+ input);
		System.out.println("Reversed String: "+ reverseString.apply(input));
	}
}