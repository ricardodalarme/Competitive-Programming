// https://www.urionlinejudge.com.br/judge/pt/problems/view/1318

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,n,t;

    while (true)
    {
        cin >>a>>b;
        t=0;
        if (a==0 && b==0)
            break;
        int as[a+1];

          for (int i=0 ; i < a; i ++)
            as[i+1]=0;
        for (int i=0 ; i < b; i ++)
        {
            cin >>n;
            as[n]+=1;
            if (as[n] ==2)
                t+=1;
        }
        cout << t << endl;
    }
    return 0;
}
