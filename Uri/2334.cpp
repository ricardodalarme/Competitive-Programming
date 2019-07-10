// https://www.urionlinejudge.com.br/judge/pt/problems/view/2334

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    unsigned long long int    a;
    do
    {
        scanf("%llu",&a);
        if (a!=-1)
        {
            if (a==0 || a==1)
                printf("0\n" );
            else
                printf("%llu\n",a-1 );
        }
    }
    while (a!=-1);

    return 0;
}
