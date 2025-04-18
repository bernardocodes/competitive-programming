#include <stdio.h>

int main()
{
    int testes;
    scanf("%d%*c", &testes);
    for (int i = 0; i < testes; i++)
    {
        int a1, a2, b1, b2;
        int vitorias = 0;
        scanf("%d%*c %d%*c %d%*c %d%*c", &a1, &a2, &b1, &b2);

        if (a1 > b1 && a2 > b2)
        {
            vitorias++;
        }
        if (a1 > b2 && a2 > b1)
        {
            vitorias++;
        }
        if (a2 > b2 && a1 > b1)
        {
            vitorias++;
        }
        if (a2 > b1 && a1 > b2)
        {
            vitorias++;
        }
        printf("%d\n", vitorias);
    }
    return 0;
}