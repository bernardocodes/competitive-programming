#include <stdio.h>
#include <stdlib.h>

void lerVetor(int *vet, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        scanf("%d%*c", &vet[i]);
    }
}

void ordenar(int qtdEstudantes, int *colecaoEstudantes)
{ // ordena o vetor
    for (int i = 0; i < qtdEstudantes - 1; i++)
    {
        for (int j = 0; j < (qtdEstudantes - 1 - i); j++)
        {
            if (colecaoEstudantes[j] > colecaoEstudantes[j + 1])
            {
                int temp = colecaoEstudantes[j];
                colecaoEstudantes[j] = colecaoEstudantes[j + 1];
                colecaoEstudantes[j + 1] = temp;
            }
        }
    }
}

int exclui1(int *novo, int *colecaoEstudantes, int tam)
{ // exclui termos indesejados
    int j = 0;
    int diferencaIJ = 0;
    for (int i = 0; i < tam; i++)
    {
        if (colecaoEstudantes[i] != 1 && colecaoEstudantes[i] != 0)
        {
            novo[j] = colecaoEstudantes[i];
            j++;
        }
        diferencaIJ = i - j;
    }
    for (int k = diferencaIJ; k < tam; k++)
    { // preencher posições seguintes, que estão vazias, com -1
        novo[j] = -1;
    }
    return diferencaIJ;
}

int main()
{
    int testes;
    scanf("%d%*c", &testes);
    for (int i = 0; i < testes; i++) // testes
    {

        int qtdEstudantes, minForca;
        int tam;
        int maisFraco;
        int aux;
        int cont = 0;
        int diferenca=0;

        scanf("%d%*c %d%*c", &qtdEstudantes, &minForca);

        int colecaoEstudantes[qtdEstudantes];
        int v[qtdEstudantes];

        lerVetor(colecaoEstudantes, qtdEstudantes);

        ordenar(qtdEstudantes, colecaoEstudantes);

        diferenca = exclui1(v, colecaoEstudantes, qtdEstudantes);

        int qtdEstudantesNoTime = 1;
        int posMaisFraco = 0;
        int contaTimes = 0;

        qtdEstudantes -= diferenca;//atualiza o tam

        int j = -1;
        do
        {
            j++;
            if (v[posMaisFraco] * qtdEstudantesNoTime >=
                minForca)
            { // menor * qtd alunos >= minForca ent cont++
                contaTimes++;
                posMaisFraco += qtdEstudantesNoTime; // x
                qtdEstudantesNoTime = 1;
            }
            else
            {
                // tem mais gente pra por?
                if (v[posMaisFraco + 1] != -1 && j+2 < qtdEstudantes)
                {
                    qtdEstudantesNoTime++; // coloca um aluno no time
                }
                else
                {
                    j = qtdEstudantes; // encerra pq estourou
                }
            }

        } while (v[j] != -1 && j < qtdEstudantes); // até encontrar a parede de -1 que eu fiz && percorrer todo o tam

        printf("%d\n", contaTimes); // quantos times fortes foi possível formar?
    }
    return 0;
}
