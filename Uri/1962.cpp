// https://www.urionlinejudge.com.br/judge/pt/problems/view/1962

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i =1; i<=a; i++)
    {
        int b;
        scanf("%d",&b);
        b=2015-b;
        if (b>0)
            printf("%d D.C.\n", b);
        else
            printf("%d A.C.\n", abs(b-1));
    }
    return 0;
}
