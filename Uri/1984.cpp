// https://www.urionlinejudge.com.br/judge/pt/problems/view/1984

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin >> a;
    for (int i=0;i <a.size(); i++)
        printf("%c", a[a.size()-i-1]);
    printf("\n");
    return 0;
}
