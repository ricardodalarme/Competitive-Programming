// https://www.urionlinejudge.com.br/judge/pt/problems/view/1161

#include <bits/stdc++.h>
using namespace std;

long long int fatorial (long long int x)
{
    if (x==0 || x==1)
        return 1;
    return fatorial(x-1)* x;
}
int main()
{
    long long int a,b,r=0;
    while (scanf("%lld %lld", &a, &b)!=EOF)
        printf("%lld\n", fatorial(a)+fatorial(b));
    return 0;
}
