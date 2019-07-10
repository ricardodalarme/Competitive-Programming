// https://www.urionlinejudge.com.br/judge/pt/problems/view/2520

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    while ( scanf("%d %d", &a, &b)!=EOF)
    {
        int x1,y1,x2,y2,r;
        for (int y=0 ; y<a; y++)
            for (int x=0 ; x<b; x++)
            {
                int c;
                scanf("%d", &c);
                if (c==1)
                {
                    x1=x;
                    y1=y;
                }
                else if (c==2)
                {
                    x2=x;
                    y2=y;
                }
            }
        r= abs(x1-x2) + abs(y1-y2);
        printf("%d\n",r);
    }
    return 0;
}
