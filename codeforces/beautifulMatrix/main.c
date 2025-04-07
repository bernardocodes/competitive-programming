//https://codeforces.com/problemse

#include <stdio.h>

void leMat(int mat[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d%*c",&mat[i][j]);
		}
	}
}

void printMat(int mat[5][5]){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			printf("%d ",mat[i][j]);
		}
		puts("");
	}
}

void findOne(int mat[5][5],int *linha, int *coluna){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(mat[i][j]!=0){
				*linha = i;
				*coluna = j;
			}
		}
	}
}

void centralizaColuna(int mat[5][5],int linha,int coluna,int *mov){
	int aux = 0;
	for(int i=0;i<2;i++){
		if(coluna < 2){
			//swap
			aux = mat[linha][coluna];
			mat[linha][coluna] = mat[linha][coluna + 1];
			mat[linha][coluna + 1] = aux;	
			//atualizar coordenada do índice
			coluna++;
			//contar movimentação
			(*mov)++;
			
		}else if(coluna > 2){
			//swap
			aux = mat[linha][coluna];
			mat[linha][coluna] = mat[linha][coluna - 1];
			mat[linha][coluna - 1] = aux;	
			//atualizar coordenada do índice
			coluna--;
			//contar movimentação
			(*mov)++;

		}
	}	
	//swap
	//atualizar coordenada do índice
	//repete até coluna == 2
}


void centralizaLinha(int mat[5][5],int linha,int coluna,int *mov){
	int aux = 0;
	for(int i=0;i<2;i++){
		if(linha < 2){
			//swap
			aux = mat[linha][coluna];
			mat[linha][coluna] = mat[linha + 1][coluna];
			mat[linha + 1][coluna] = aux;	
			//atualizar coordenada do índice
			linha++;
			//contar uma mov
			(*mov)++;
			
		}else if(linha > 2){
			//swap
			aux = mat[linha][coluna];
			mat[linha][coluna] = mat[linha - 1][coluna];
			mat[linha - 1][coluna] = aux;	
			//atualizar coordenada do índice
			linha--;
			//contar uma mov
			(*mov)++;

		}
	}	
	//swap
	//atualizar coordenada do índice
	//repete até linha == 2
}

int main(){
	int mat[5][5];

	int linha = 0;
	int coluna = 0;
	int movimentacoes = 0;

	int *mov = &movimentacoes;
	int *lPtr = &linha;
	int *cPtr = &coluna;

	leMat(mat);
	
	//printMat(mat);
	//puts("");

	findOne(mat,lPtr,cPtr);//identificar posição do 1
	
	centralizaColuna(mat,linha,coluna,mov);
	
	findOne(mat,lPtr,cPtr);//chama novamente para atualizar linha e coluna
	
	centralizaLinha(mat,linha,coluna,mov);
	
	//printMat(mat);

	printf("%d\n",movimentacoes);
	return 0;
}
