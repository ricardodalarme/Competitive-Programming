// https://www.urionlinejudge.com.br/judge/pt/problems/view/1118

#include <iostream>
 
using namespace std;
 
int main() {
     float a,b;int c;
v1:
    scanf("%f", &a);
    if (a <0 || a >10)
    {
        printf("nota invalida\n");
        goto v1;
    }
v2:
    scanf("%f", &b);
    if (b <0 || b >10)
    {
        printf("nota invalida\n");
        goto v2;
    }

    printf("media = %.2f\n", (a+b)/2.0);
v3:
    printf("novo calculo (1-sim 2-nao)\n");
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
    return 0;
}