// https://www.urionlinejudge.com.br/judge/pt/problems/view/1134

#include <iostream>

using namespace std;

int main()
{
    int a, b = 0, c = 0, d = 0;

    do
    {
        scanf("%d", &a);
        if (a == 1)
            b++;
        else if (a == 2)
            c++;
        else if (a == 3)
            d++;
    } while (a != 4);

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", b, c, d);
    return 0;
}