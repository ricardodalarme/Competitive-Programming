// https://www.urionlinejudge.com.br/judge/pt/problems/view/2543

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;

    while (scanf("%d %d", &a, &b)!=EOF)
    {
        int s=0;
        
        for (int i =1; i<=a; i++)
        {
            int c,d;
            scanf("%d %d", &c, &d);
            if (c==b && d==0)
                s++;
        }
        printf("%d\n", s);
    }
    return 0;
}
