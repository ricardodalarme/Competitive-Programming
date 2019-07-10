// https://www.urionlinejudge.com.br/judge/pt/problems/view/2523

#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a[27];
    int b,c;
    while (scanf("%s %d", &a,&b)!=EOF)
    {
        for (int i =1; i <=b; i++)
        {
            scanf("%d", &c);
            printf("%c", a[c-1]);
        }
        printf("\n");
    }

    return 0;
}
