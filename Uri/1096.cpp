// https://www.urionlinejudge.com.br/judge/pt/problems/view/1096

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a=1,b =7,i=0;

    while (a<=9)
    {
        printf("I=%d J=%d\n", a,b);
        i++;
        b--;
        if (i %3==0)

        {
            b=7;
            a+=2;
        }

    }
    return 0;
}
