#include <stdio.h>

void caso(){

    int a = 0;
    int b = 0;
    int n = 0;
    int cont = 0;

    scanf("%d",&n);

    a = 1;
    b = n-1;

    while(a<n){
       a++;
       b--;
       cont++;
    }

    printf("%d\n",cont);
}

void testes(int t){
    for(int i=0;i<t;i++){
        caso();
    }
}

int main(){
    int t = 0;
    scanf("%d",&t);
    testes(t);
    return 0;
}

/*

Depois de olhar para os casos teste por um tempo, eu percebi que dava para simplificar a solução original, porque toda resposta é o valor de n - 1:

#include <stdio.h>

void caso(){
    int n = 0;
    scanf("%d",&n);
    printf("%d\n",n-1);
}

void testes(int t){
    for(int i=0;i<t;i++){
        caso();
    }
}

int main(){
    int t = 0;
    scanf("%d",&t);
    testes(t);
    return 0;
}

*/