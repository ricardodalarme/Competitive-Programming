// https://www.urionlinejudge.com.br/judge/pt/problems/view/2540

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    while (scanf("%d", &a)!=EOF)
    {
    int s=0;
    for (int i =1; i <= a; i++)
    {
        scanf("%d", &b);
        if (b==1)
            s++;
    }

    if (s>= (a*2)/3.0)
        printf("impeachment\n");
    else
        printf("acusacao arquivada\n");
    }
    return 0;
}
