// https://www.urionlinejudge.com.br/judge/pt/problems/view/2845

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    vector <int>c;
    cin >>a;
    for (int i= 0 ; i < a; i++)
    {
        cin >>b;
        c.push_back(b);
    }
    sort(c.begin(), c.end());
    cout << c[a-1]+1 << endl;
}
