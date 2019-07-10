// https://www.urionlinejudge.com.br/judge/pt/problems/view/2176

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >>a;
    int s=0;
    for (int i =0; i <a.size(); i++)
        if (a[i]=='1')
            s++;
    if (s%2==0)
        cout << a << "0\n";
    else
        cout << a << "1\n";
    return 0;
}
