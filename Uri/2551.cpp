// https://www.urionlinejudge.com.br/judge/pt/problems/view/2551

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b=0,c=0;
    vector<int> v;

    while (scanf("%d", &a)!=EOF)
    {
       double lr=0;
        for (int i=1; i <=a; i++)
        {
            scanf("%d %d", &b,&c);
            double r=c/(double)b;
            if (r >lr)
            {
                lr=r;
                v.push_back(i);
            }
        }
        for (int i=0; i <v.size(); i++)
            printf("%d\n", v[i]);
         v.clear();
    }
    return 0;
}
