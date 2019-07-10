// https://www.urionlinejudge.com.br/judge/pt/problems/view/1555

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i<=a; i++)
    {
        int b,c;

        scanf ("%d %d",&b,&c);
        int ra = pow(3*b,2)+pow(c,2);
        int be= 2* pow(b,2)+ pow(5*c,2);
        int ca= -100 * b + pow(c,3);

        if (ra > be && ra > ca)
            printf("Rafael ganhou\n");
        else  if (be > ra && be > ca)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");
    }
    return 0;
}
