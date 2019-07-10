// https://www.urionlinejudge.com.br/judge/pt/problems/view/2679

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long  int a;
    scanf("%lld", &a);
    if (a %2==0)
        printf("%lld\n", a+2);
    else
        printf("%lld\n", a+1);
}
