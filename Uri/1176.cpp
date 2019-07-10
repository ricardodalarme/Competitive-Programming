// https://www.urionlinejudge.com.br/judge/pt/problems/view/1176

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int f[63];
    f[0]=0;
    f[1]=1;

    for (int i=2; i <= 60; i++)
    {
        f[i]=f[i-2]+f[i-1];
    }
    int a;
    scanf ("%d",&a);
    for (int i =1; i <=a; i++)
    {
        int b;
        scanf("%d", &b);
        printf("Fib(%d) = %lld\n",b,f[b]);

    }
    return 0;
}