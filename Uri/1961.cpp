// https://www.urionlinejudge.com.br/judge/pt/problems/view/1961

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    int n[b+1];
    for (int i =1; i<=b; i++)
        scanf("%d", &n[i]);
    for (int i =1; i<b; i++)
        if (abs(n[i]- n[i+1])> a)
        {
            printf("GAME OVER\n");
            return 0;
        }
    printf("YOU WIN\n");
    return 0;
}
