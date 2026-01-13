import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);

		double tempo = scanner.nextDouble();
		double velocidadeMedia = scanner.nextDouble();	
		double distancia = velocidadeMedia*tempo;
		double litrosGastos = distancia/12;
		System.out.printf("%.3f\n",litrosGastos);

		scanner.close();
	}
}
//s = litros gastos em viajem (.3f);
//e = temp (h), velo.media (km/h);
//	>> obter distancia percorrida;
//	>> litragem nescessária;

