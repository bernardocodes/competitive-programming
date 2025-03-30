#include <stdio.h>
#include <stdlib.h>

int main() {

  int testes;

  scanf("%d%*c", &testes);

  for (int i = 0; i < testes; i++) { // múltiplos casos teste

    int qtdEstudantes, minForca;
    int tam;
    int maisFraco;
    int aux;
    int cont = 0;

    scanf("%d%*c %d%*c", &qtdEstudantes, &minForca); // entrada

    tam = qtdEstudantes;

    int colecaoEstudantes[qtdEstudantes];
    int v[qtdEstudantes];

    scanf("%d%*c", &colecaoEstudantes[0]); // ler termos e calc mais fraco
    maisFraco = colecaoEstudantes[0];
    for (int i = 1; i < tam; i++) {
      scanf("%d%*c", &colecaoEstudantes[i]);
      if (colecaoEstudantes[i] < maisFraco) {
        maisFraco = colecaoEstudantes[i];
      }
    }

    // ordenar coleção de estudantes, para que o menor fique em primeiro
    for (int i = 0; i < qtdEstudantes - 1; i++) {
      for (int j = 0; j < (qtdEstudantes - 1 - i); j++) {
        if (colecaoEstudantes[j] > colecaoEstudantes[j + 1]) {
          int temp = colecaoEstudantes[j];
          colecaoEstudantes[j] = colecaoEstudantes[j + 1];
          colecaoEstudantes[j + 1] = temp;
        }
      }
    }

    int qtdEstudantesNoTime = 1; // quantidade de estudantes no time
    int posMaisFraco = 0;
    int contaTimes = 0;

    for (int i = 0; i < qtdEstudantes; i++) {
      if (colecaoEstudantes[posMaisFraco] * qtdEstudantesNoTime >=
          minForca) { // menor * qtd alunos >= minForca ent cont++
        contaTimes++;
        posMaisFraco += qtdEstudantesNoTime;
        qtdEstudantesNoTime = 1;
      } else {
        qtdEstudantesNoTime++; // coloca um aluno no time
      }
    }

    printf("%d\n", contaTimes);
  }

  //ERRADO
  // seguinte: aparentemente eu não posso ter zero nem um no meu vetor, se não a
  // conta da errado (olhar cad)

  // talvez seja uma boa percorrer o vetor ordenado até achar a primeira posição
  // que não tem zero/um
  return 0;
}
