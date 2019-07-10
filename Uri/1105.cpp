// https://www.urionlinejudge.com.br/judge/pt/problems/view/1105

#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,v,n1,n2,n3;
    while(true)
    {
        cin >>a>>b;
        if (a ==0 && 0==b)
            break;
        long long int ban[a+1];
        for (int i =1; i <=a; i++)
        {
            cin >>v;
            ban[i]=v;
        }
        bool deu=true;
        for (int x =1; x <=b; x++)
        {
            cin >>n1>>n2>>n3;
            ban[n1]-=n3;
            ban[n2]+=n3;
        }

        for (int i =1; i <=a; i++)
            if (ban[i] <0)
            {
                deu=false;
                break;
            }

        if (deu)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}
