// https://www.urionlinejudge.com.br/judge/pt/problems/view/1198

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int a,b;
    while(scanf("%lld %lld", &a, &b) !=EOF)
    {
         long long int c=0;
        if (b>a)
        {
            c=b;
            b=a;
            a=c;
        }
        printf ("%lld\n", a-b);
    }

    return 0;
}
