// https://www.urionlinejudge.com.br/judge/pt/problems/view/2717

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d", &a, &b,&c);
    if (b+c <= a)
        printf("Farei hoje!\n");
    else
        printf("Deixa para amanha!\n");
    return 0;
}
