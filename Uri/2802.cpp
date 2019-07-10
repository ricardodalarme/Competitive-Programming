// https://www.urionlinejudge.com.br/judge/pt/problems/view/2802

#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, R;
    cin >> n;
    R = 1 + (((n - 1) * n) / 2) + (((n) * (n - 1) * (n - 2) * (n - 3)) / 24);
    cout << R << endl;
}