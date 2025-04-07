//https://codeforces.com/contest/69/problem/A
#include <stdio.h>

void leMat(int mat[][3],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			scanf("%d%*c",&mat[i][j]);
		}
	}
}

/*
void printMat(int mat[][3], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			printf("%d ",mat[i][j]);
		}
		puts("");
	}
}
*/

int somaColuna(int mat[][3],int n){

	int acc = 0;
	int somaColuna = 0;

	for(int j=0;j<3;j++){//somar coluna por coluna
		for(int i=0;i<n;i++){
			acc += mat[i][j];//acc guarda a soma da coluna em questão
		}
		if(acc==0){
			somaColuna++;//conta quantas colunas tem a soma == 0
		}
		acc = 0;//atualiza acc para o prox uso
	}

	if(somaColuna==3){//sig que as 3 colunas == 0 --> satisfaz o enunciado
		return 0;
	}else{
		return 1;
	}	
}

int main(){
	int n;
	scanf("%d%*c",&n);//ler num de linhas da matriz
	int mat[n][3];

	leMat(mat,n);
	//printMat(mat,n);

	if(somaColuna(mat,n)==0){
		printf("YES\n");//soma de todas as colunas == 0
	}else{
		printf("NO\n");
	}
	return 0;
}
