// https://www.urionlinejudge.com.br/judge/pt/problems/view/2826

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    vector <string> c;
    cin >> a>>b;
    c.push_back(a);
    c.push_back(b);
    sort(c.begin(), c.end());
    cout << c[0] <<endl << c[1] <<endl;
}
