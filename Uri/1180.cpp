// https://www.urionlinejudge.com.br/judge/pt/problems/view/1180

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=INT_MAX,d;

    scanf("%d", &a);

        for (int y=0; y <=a-1; y++)
        {
            scanf("%d", &b);
            if (b<c)
            {
                c=b;
                d=y;
            }
        }
printf("Menor valor: %d\nPosicao: %d\n",c,d);
    return 0;
}
