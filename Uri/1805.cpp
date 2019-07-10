// https://www.urionlinejudge.com.br/judge/pt/problems/view/1805

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,r=0;
    scanf("%lld %lld", &a, &b);
    for (int i =a; i <=b; i++)
        r+=i;
    printf("%lld\n",r);
    return 0;
}
