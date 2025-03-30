//https://codeforces.com/contest/271/problem/A
#include <stdio.h>

int decompor(int n,int *decomp){

	int resto = 0;
	int dividendo = 10;
	int quociente = 0;
	int Divisor = n;
	int retornar = 0;
	
	for(int i=0;i<4;i++){//decompor n e guardar
		quociente = Divisor / dividendo;
		resto = Divisor % dividendo;
		decomp[i] = resto;
		Divisor = quociente;
	}

	//comparar os algarismos do vetor decomp[] entre si
	for(int i=0;i<3;i++){
		switch (i){//algarismos distintos, então  nenhum if será satisfeito --> return == 0
			case 0:
				if(decomp[0]==decomp[1]){
					retornar++;
				}else if(decomp[0]==decomp[2]){
					retornar++;
				}else if(decomp[0]==decomp[3]){
					retornar++;
				}
				break;
			case 1:
				if(decomp[1]==decomp[2]){
					retornar++;
				}else if(decomp[1]==decomp[3]){
					retornar++;
				}
				break;
			case 2:
				if(decomp[2]==decomp[3]){
					retornar++;
				}
				break;
		}	
	}
	return retornar;//retorna num == 0 || num != 0	
}

int main(){

	int num;
	int decomp[4];

	scanf("%d%*c",&num);
	num = num + 1;//prepara o teste para o prox ano
	
	while(decompor(num,decomp)!=0){
		num++;//aumenta um ano na contagem
	}
	
	printf("%d",num);//printa o ano
			 
	return 0;
}
