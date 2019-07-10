// https://www.urionlinejudge.com.br/judge/pt/problems/view/2779

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b;
    set<int> v;
    for (int i = 0; i < b; i++)
    {
        cin >> c;
        v.insert(c);
    }
    cout << a-v.size() << endl;
}