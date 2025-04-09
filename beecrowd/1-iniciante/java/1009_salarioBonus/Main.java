
import java.util.Scanner;
import java.util.Locale;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in).useLocale(Locale.US);	

		String nome = scanner.nextLine();

		Double salarioBruto = scanner.nextDouble();

		Double comissao = scanner.nextDouble();
		Double salarioTotal;

		salarioTotal = salarioBruto + (comissao*0.15);

		System.out.printf(Locale.US,"TOTAL = R$ %.2f\n",salarioTotal);
		
		scanner.close();
	}
}