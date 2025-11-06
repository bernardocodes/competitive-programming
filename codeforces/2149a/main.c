#include <stdio.h>

int preencher(int *vet, int t){

    int operacoes = 0;
    int contaQuantosMenosUm = 0;

    for(int i=0;i<t;i++){
        scanf("%d",&vet[i]);
        if(vet[i]==0){//sempre ++ pq não pode ter nem um zero
            operacoes++;
        }else if (vet[i]==(-1)){
            contaQuantosMenosUm++;
        }
    }
    
    //falta contar operações do menos um
    if(contaQuantosMenosUm%2!=0){
        operacoes+=2;
    }
    
    return operacoes;
}

void caso(){
    int tam = 0;
    scanf("%d",&tam);
    int vet[tam];
    int qtdOperacoes = preencher(vet,tam);
    printf("%d\n",qtdOperacoes);
}

void testes(int n){
    for(int i=0; i<n;i++){
        caso();
    }
}

int main(){
    int t = 0;
    scanf("%d",&t);
    testes(t);
    return 0;
}