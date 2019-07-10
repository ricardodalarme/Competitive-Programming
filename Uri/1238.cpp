// https://www.urionlinejudge.com.br/judge/pt/problems/view/1238

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >>a;
    for (int i =0; i <a; i++)
    {
        string b,c,r="";
        cin >>b>>c;

        for (int x =0; x < min(b.size(),c.size()); x++)
        {
            r+= b[x];
            r+= c[x];
        }
        if (b.size() > c.size())
            for (int x =c.size(); x < b.size(); x++)
                r+= b[x];
        else  if (b.size() < c.size())
            for (int x =b.size(); x < c.size(); x++)
                r+= c[x];
        cout << r << endl;
    }
}
