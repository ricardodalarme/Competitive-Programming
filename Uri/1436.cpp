// https://www.urionlinejudge.com.br/judge/pt/problems/view/1436

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    scanf("%d", &a);
    for (int i =1; i <= a; i++)
    {
        int b;
        scanf ("%d", &b);
        vector<int> c;
        for (int z =1; z <=  b; z++)
        {
            int h;
            scanf("%d", &h);
            c.push_back(h);
        }
        sort(c.begin(),c.end());
        printf("Case %d: %d\n",i,c[(b-1)/2]);
    }
    return 0;
}
