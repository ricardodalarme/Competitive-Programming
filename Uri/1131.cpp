// https://www.urionlinejudge.com.br/judge/pt/problems/view/1131

#include <iostream>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int a, b, c;
    int gre = 0, inte = 0, empate = 0;
    int cc = 0;
v1:
    cc += 1;
    scanf("%d%d", &a, &b);

    if (a > b)
        inte += 1;
    else if (b > a)
        gre += 1;
    else
        empate += 1;

v3:
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        goto v1;
    case 2:
        break;
    default:
        goto v3;
    }

    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", cc, inte, gre, empate);

    if (inte > gre)
        printf("Inter venceu mais\n");
    else if (gre > inte)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}