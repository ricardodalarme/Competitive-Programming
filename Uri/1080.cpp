// https://www.urionlinejudge.com.br/judge/pt/problems/view/1080

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[101];
    int s;
    int i;
    for ( i =1;i <= 100; i++)
    {
        scanf("%d", &n[i]);
        if (n[i] >n[s])
        s=i;
    }
    printf("%d\n%d\n", n[s],s);
    return 0;
}
