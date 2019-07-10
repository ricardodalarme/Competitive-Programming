// https://www.urionlinejudge.com.br/judge/pt/problems/view/2663

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c=0,d=0;
    scanf("%d %d", &a, &b);
    vector <int> n;
    n.push_back(0);
    for (int i =1; i <=a; i++)
    {
        scanf("%d", &c);
        n.push_back(c);
    }
    sort(n.begin(), n.end());

    for (int i =a; i >=1; i--)
    {
        d++;
        if (d >=b && n[i]!= n[i-1])
            break;
    }
    printf("%d\n", d);
    return 0;
}
