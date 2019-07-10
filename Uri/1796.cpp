// https://www.urionlinejudge.com.br/judge/pt/problems/view/1796

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c=0,d=0;
    scanf ("%d", &a);
    for (int i=1; i <=a; i++)
    {
        scanf("%d", &b);
        if (b==0)
            c++;
        else
            d++;
    }
    if (c>d)
        printf("Y\n");
    else
        printf("N\n");
}

