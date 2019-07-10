// https://www.urionlinejudge.com.br/judge/pt/problems/view/1533

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    do
    {
        scanf("%d", &a);
        int c[a+1];
        int d=0,e=0,f=0;
        if (a>0)
        {
            for (int i =1; i <= a; i++)
            {
                scanf("%d", &c[i]);
                if (c[i]>d)
                    d=c[i];
            }
            for (int i =1; i <= a; i++)
            {
                if (c[i]>e && c[i] !=d)
                {
                    e=c[i];
                    f=i;
                }
            }

            printf("%d\n", f);
        }
    }
    while (a!=0);
}

