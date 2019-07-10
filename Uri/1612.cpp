// https://www.urionlinejudge.com.br/judge/pt/problems/view/1612

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i =1; i <= a; i++)
    {
        long long int b;
        scanf("%lld", &b);
        if ( b %2== 0 )
        printf("%lld\n", b/2);
        else
        printf("%lld\n", (b+1) /2);
    }
    return 0;
}