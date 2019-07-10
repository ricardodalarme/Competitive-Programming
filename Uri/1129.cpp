// https://www.urionlinejudge.com.br/judge/pt/problems/view/1129

#include <bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        int a;
        cin >>a;
        if (a==0)
            break;
        for (int i =0 ; i <a; i++)
        {
            int b,c,d=0;
            for (int i =0 ; i <5; i++)
            {
                cin>>b;
                if (b <=127)
                {
                    c=i;
                    d++;
                }
            }
            if (d==1)
            {
                if (c==0)
                    cout <<"A\n";
                else if (c==1)
                    cout <<"B\n";
                else if (c==2)
                    cout <<"C\n";
                else if (c==3)
                    cout <<"D\n";
                else if (c==4)
                    cout <<"E\n";
            }
            else
                cout <<"*\n";
        }
    }
    return 0;
}
