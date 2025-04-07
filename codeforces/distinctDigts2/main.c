//https://codeforces.com/problemset/problem/1228/A

#include <stdio.h>

int diferentes(int x){
	int divisor=x,resto,quociente;
	int vet[5];
	int diferenca = 5;
	int cont = 0;
	int i=0;
	/*
	while((divisor/10)!=0){
		quociente = divisor/10;
		resto = divisor%10;
		divisor = quociente;
		vet[i] = resto;	
		cont++;//conta qtd algarismos
		i++;
	}*/
	do{
		quociente = divisor/10;
		resto = divisor%10;
		divisor = quociente;
		vet[i] = resto;	
		cont++;//conta qtd algarismos
		i++;
		if(divisor/10!=0){
			vet[i] = divisor%10;
		}
	}while((divisor/10)!=0);
	printf("%d\n",vet[0]);	
	printf("%d\n",vet[1]);
	printf("%d\n",vet[2]);

	for(int i=0;i<cont-1;i++){
		if(vet[i]==vet[i+1]){
			diferenca--;	
		}	
	}

	/*
	if(deferenca==4){
		return 0;
	}else{
		return 1;
	}*/

	return diferenca;
}

int main(){
	int l,r,x;
	int qtdRep;
	int resp = -1;

	scanf("%d%*c",&l);	
	scanf("%d%*c",&r);
	x = l;
	qtdRep = r-l;
	
	for(int i=0;i<qtdRep;i++){
		if(diferentes(x)==5){
			resp = x;
		}	
	}

	/*
	while(diferentes(x)!=5){
		printf("x = %d\n",x);//
		x++;
	}*/

	printf("%d\n",resp);

	return 0;
}
