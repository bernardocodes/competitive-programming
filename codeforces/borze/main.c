//https://codeforces.com/problemset/problem/32/B
#include <stdio.h>
#include <string.h>
/*
void printStr(char *s){
	int tam = strlen(s);
	for(int i=0;i<tam;i++){
		printf("%c",s[i]);	
	}
}*/

int main(){
	char str[210];
	int tam;
	int i=0;
	scanf("%s",str);
	tam = strlen(str);
	
	//printf("tam = %d\n",tam);
	//printStr(str);
	
	while(i<tam){//TENTE COM WHILE, ALTERANDO O I EM CADA NUM
		if(str[i]=='.'){//caso comece com ponto
			printf("0");
			i++;
		}else if(str[i+1]=='.'){//caso comece com traço
			printf("1");
			i+=2;
		}else if(str[i+1]=='-'){
			printf("2");
			i+=2;
		}	
	}	
	return 0;
}
