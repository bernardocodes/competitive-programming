import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);	

		double a = 0.0, b = 0.0, c = 0.0;

		double aCirculo = 0.0;//pi*r*r
		double aTriangulo = 0.0;//base*h/2
		double aTrapezio = 0.0;//(B+b)*h/2
		double aQuadrado = 0.0;//l*l
		double aRetangulo = 0.0;//largura*comprimento
		double pi = 3.14159;

		a = scanner.nextDouble();
		b = scanner.nextDouble();
		c = scanner.nextDouble();

		aTriangulo = (a*c)/2;
		aCirculo = (pi*c)*c;
		aTrapezio = ((a+b)*c)/2;
		aQuadrado = b*b;
		aRetangulo = a*b;

		System.out.printf("TRIANGULO: %.3f\n",aTriangulo);	
		System.out.printf("CIRCULO: %.3f\n",aCirculo);
		System.out.printf("TRAPEZIO: %.3f\n",aTrapezio);
		System.out.printf("QUADRADO: %.3f\n",aQuadrado);
		System.out.printf("RETANGULO: %.3f\n",aRetangulo);

		scanner.close();
	}
}
