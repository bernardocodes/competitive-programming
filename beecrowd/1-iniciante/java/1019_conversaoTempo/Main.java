import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner scanner = new Scanner(System.in);
		
		int seg = scanner.nextInt();
		int min = 0;
		int h = 0;	
		int resto = 0;

		h = seg/(60*60);
		resto = seg%(60*60);
		min = resto/60;
		seg = resto%60;	

		System.out.println(h+":"+min+":"+seg);

		scanner.close();
	}
}

//ent = int (duração em segundos);
//sai = horas;
