// https://www.urionlinejudge.com.br/judge/pt/problems/view/1177

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int a,c=0;
   int b[1000];

    scanf("%d", &a);

        for (int y=0; y <1000; y++)
        {
            if (y %a==0)c=0;
            c++;
            printf("N[%d] = %d\n", y,c-1);
        }

    return 0;
}
