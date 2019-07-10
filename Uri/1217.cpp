// https://www.urionlinejudge.com.br/judge/pt/problems/view/1217

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, q=0;
    double b,kg=0;
    string c;
    cin >>a;
    for (int i=0; i <a; i++)
    {
        int d=1;
        cin>>b;
        kg+=b;
        getline(cin,c);
        getline(cin,c);
        for (int i=0; i < c.size(); i++)
            if (c[i] == ' ')
                d++;
        q+=d;
        printf("day %d: %d kg\n", i+1,d);
    }

    printf("%.2lf kg by day\nR$ %.2lf by day\n", q*1.0/a, kg *1.0 /a);
}
