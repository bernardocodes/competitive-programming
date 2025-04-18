#include <stdio.h>

int separaDigito(int posicao,int num){//retorna o dígito correspondente a posição no parâmentro
    int resto;
    int dividendo = num;
    int quociente;
    for(int i=1;i<=posicao;i++){
        quociente = dividendo/10;
        resto = dividendo%10;
        dividendo = quociente;
    }
    return resto;
}
int main(){
    int t;
    scanf("%d%*c",&t);
    for(int i=0;i<t;i++){//testes
        int num;
        int a,b;
        scanf("%d%*c",&num);
        a = separaDigito(1,num);
        b = separaDigito(2,num);
        printf("%d\n",a + b);
    }
    return 0;
}