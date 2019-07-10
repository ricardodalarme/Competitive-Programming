// https://www.urionlinejudge.com.br/judge/pt/problems/view/1759

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d",&a);
    for (int i=1; i<=a; i++)
        if (i!=a)
            printf("Ho ");
        else
            printf("Ho!");
   printf("\n");
    return 0;
}

