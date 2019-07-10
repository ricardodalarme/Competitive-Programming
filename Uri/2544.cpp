// https://www.urionlinejudge.com.br/judge/pt/problems/view/2544

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    long int a;
    while(scanf("%ld", &a) !=EOF)
    {
        long int b=0;
    do
    {
        a/=2;
        b++;
    } while (a>0);
     printf("%ld\n",b-1 );
    }

    return 0;
}
