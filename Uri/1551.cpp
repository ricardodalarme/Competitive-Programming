// https://www.urionlinejudge.com.br/judge/pt/problems/view/1551

#include <bits/stdc++.h>
using namespace std;
vector<int> nums;

int main()
{
    int a;
    string b;
    cin >> a;
    set<char> c;
    for (int i = 0; i < a; i++)
    {
        getchar();
        getline(cin, b);
        for (int j = 0; j < b.size(); j++)
            if (b[j]!=' ' && b[j]!=',' && b[j]!='.' )
            c.insert(b[j]);
        if (c.size() == 26)
            cout << "frase completa\n";
        else if (c.size() >= 13)
            cout << "frase quase completa\n";
        else
            cout << "frase mal elaborada\n";
        c.clear();
    }
    return 0;
}