// https://www.urionlinejudge.com.br/judge/pt/problems/view/1858

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    int b=0,c=9999,d=0;
    for (int i=1; i<=a; i++)
    {
        scanf("%d", &b);
        if (b <c)
        {
            c=b;
            d=i;
        }
    }
    printf("%d\n", d);
    return 0;
}

