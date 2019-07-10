// https://www.urionlinejudge.com.br/judge/pt/problems/view/1437

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    do
    {
        int p=1;
        string c;
        scanf ("%d", &b);
        if (b>0)
        {

            cin >>c;
            for (int i =0 ; i < b; i++)
            {
                if (c[i] =='D')
                    p++;
                else
                    p--;
                if (p <1)
                    p=4;
                else if (p>4)
                    p=1;
            }
            if (p==1)
                printf("N\n");
            else if (p==2)
                printf("L\n");
            else if (p==3)
                printf("S\n");
            else if (p==4)
                printf("O\n");
        }
    }
    while (b!=0);
}