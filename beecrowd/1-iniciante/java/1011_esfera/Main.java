import java.util.Scanner;

public class Main {
    public static void main(String[] args){

        Scanner scanner = new Scanner(System.in);

        int t;
        t = scanner.nextInt();
        
        //System.out.println(t);
        
        for(int i=0;i<t;i++){//testes

            String str;
            str = scanner.nextLine();//ler str
            StringBuilder aux = new StringBuilder(str);
            
            int tam = str.length();//verif tam

            aux.setCharAt(tam - 1, '\0');//subst letras
            aux.setCharAt(tam - 2, 'i');

            str = aux.toString();
            
            System.out.println(str);//saída
        }

        scanner.close();
    }
}