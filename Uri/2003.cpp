// https://www.urionlinejudge.com.br/judge/pt/problems/view/2003

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while (scanf("%d : %d",&a, &b)!=EOF)
    {
        a*=60;
        b+=a;
        b-=7*60;
        if (b <0)
            b=0;
        printf("Atraso maximo: %d\n", b);
    }
    return 0;
}
