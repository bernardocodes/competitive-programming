import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		
		double km = scanner.nextDouble();
		double l = scanner.nextDouble();
		double consumo = km/l;
		System.out.printf("%.3f km/l\n",consumo);	
		scanner.close();		
	}
}

//distancia total percorrida (km), total de combustivel gasto (l);
//resp = consumo médio com 3 casas decimais;
