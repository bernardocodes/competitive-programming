import java.util.Scanner;

public class Main {
    public static int modulo(int num) {//módulo de um num
        if (num < 0) {
            num *= -1;
        }
        return num;
    }
    public static int mdc(int n1, int n2){//calcula o max divisor comum
        int mdc=1;
        int i=2;
        while(n1>1&&n2>1){
            if(n1%i==0){
                if(n2%i==0){
                    n1 /= i;
                    n2 /= i;
                    mdc *= i;
                }else{
                    n1 /= i;
                }
            }else if(n2%i==0){
                n2 /= i;
            }else{
                i++;
            }
        }
        return mdc;
    }

    public static void simplificar(int numerador, int denominador) {//forma irredutível de uma fração
        int mdc;
        mdc = mdc(modulo(numerador), modulo(denominador));
        numerador /= mdc;
        denominador /= mdc;
        System.out.printf("%d/%d\n", numerador, denominador);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int t = scanner.nextInt();
        for (int i = 0; i < t; i++) {// casos teste

            int n1 = scanner.nextInt();// primeira fração
            char sinal1 = scanner.next().charAt(0);
            int d1 = scanner.nextInt();

            char sinal2 = scanner.next().charAt(0);// operação desejada

            int n2 = scanner.nextInt();
            char sinal3 = scanner.next().charAt(0);// segunda fração
            int d2 = scanner.nextInt();

            int numerador = -1;
            int denominador = -1;

            switch (sinal2) {// operações com frações
                case '+':
                    numerador = (n1 * d2) + (n2 * d1);
                    denominador = (d1 * d2);
                    System.out.printf("%d%c%d = ", numerador, sinal1, denominador);
                    simplificar(numerador, denominador);
                    break;
                case '-':
                    numerador = (n1 * d2) - (n2 * d1);
                    denominador = (d1 * d2);
                    System.out.printf("%d%c%d = ", numerador, sinal1, denominador);
                    simplificar(numerador, denominador);
                    break;
                case '*':
                    numerador = (n1 * n2);
                    denominador = (d1 * d2);
                    System.out.printf("%d%c%d = ", numerador, sinal1, denominador);
                    simplificar(numerador, denominador);
                    break;
                case '/':
                    numerador = (n1 * d2);
                    denominador = (n2 * d1);
                    System.out.printf("%d%c%d = ", numerador, sinal1, denominador);
                    simplificar(numerador, denominador);
                    break;
            }

        }
        scanner.close();
    }
}

// eu quero saber como faz essa questão usando:
// conversão de tipo e string
// usando o algorítimo de Euclides