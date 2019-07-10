// https://www.urionlinejudge.com.br/judge/pt/problems/view/1828

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
        if (b ==c)
            d=2;
        else if (b=="tesoura" && c=="papel")
            d=1;
        else    if ( b=="papel" && c=="pedra")
            d=1;
        else   if ( b=="pedra" && c=="lagarto")
            d=1;
        else if ( b=="lagarto" && c=="Spock")
            d=1;
        else if ( b=="Spock" && c=="tesoura")
            d=1;
        else if ( b=="tesoura" && c=="lagarto")
            d=1;
        else if ( b=="lagarto" && c=="papel")
            d=1;
        else if ( b=="papel" && c=="Spock")
            d=1;
        else if ( b=="Spock" && c=="pedra")
            d=1;
        else if ( b=="pedra" && c=="tesoura")
            d=1;

        if (d==1)
            printf("Caso #%d: Bazinga!\n", i);
        else if (d==0)
            printf("Caso #%d: Raj trapaceou!\n", i);
        else
            printf("Caso #%d: De novo!\n", i);
    }
    return 0;
}
