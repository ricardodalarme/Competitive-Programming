// https://www.urionlinejudge.com.br/judge/pt/problems/view/1235

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string b, c;
    cin >>a;
    getline(cin, b);
    for (int x =0; x < a; x++)
    {
        getline(cin, b);
        c=b;
        int q=b.size()/2-1;
        for (int i =q; i >= 0; i--)
            c[q-i] = b[i];
        for (int i = q+1; i <b.size(); i++)
            c[i]=b[b.size()-i+q ];
        cout  << c << "\n";
    }
}
