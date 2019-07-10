// https://www.urionlinejudge.com.br/judge/pt/problems/view/1151

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    int b[a];
    b[0]=0;
b[1]=1;

printf("0 1");
    for (int i =2; i<= a-1;i++)
    {
        b[i]=b[i-2]+ b[i-1];
        printf(" %d", b[i]);
    }
    printf("\n");
    return 0;
}
