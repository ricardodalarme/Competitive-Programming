// https://www.urionlinejudge.com.br/judge/pt/problems/view/2031

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i =1; i <=a; i++)
    {
        string b,c;
        cin >> b >>c;
        int d=0;

        for (int z=1; z<=2; z++)
        {
            if (z==2)
            {
                string d=b;
                b=c;
                c=d;
            }
            if (b=="ataque" && c=="pedra")
                printf("Jogador %d venceu\n",z);
            else    if ( b=="pedra" && c=="papel")
                printf("Jogador %d venceu\n",z);
            else   if ( c=="papel" && b=="ataque")
                printf("Jogador %d venceu\n",z);
        }

        if ( b=="ataque" && c=="ataque")
            printf("Aniquilacao mutua\n");
        else  if ( b=="pedra" && c=="pedra")
            printf("Sem ganhador\n");
        else if( b=="papel" && c=="papel")
            printf("Ambos venceram\n");
    }

    return 0;
}
