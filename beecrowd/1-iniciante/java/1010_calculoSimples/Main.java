import java.util.Scanner;

public class Main{
	public static void main(String[] args){

		Scanner scanner = new Scanner(System.in);

		int codigo1, num1;
		double valUni1;
		int codigo2, num2;
		double valUni2;
		double valorPagar = 0.0;	

		codigo1 = scanner.nextInt();
		num1 = scanner.nextInt();
		valUni1 = scanner.nextDouble();
		
		codigo2 = scanner.nextInt();
		num2 = scanner.nextInt();
		valUni2 = scanner.nextDouble();
		
		valorPagar = (num1*valUni1) + (num2*valUni2);
			
		System.out.printf("VALOR A PAGAR: R$ %.2f\n",valorPagar);

		scanner.close();	
	}
}
//$ = qtd*valor
//codigo, num, valor unitario - das duas peças
//mostrar o valor a ser pago
