// https://www.urionlinejudge.com.br/judge/pt/problems/view/1323

#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
    long long int a,s=0;
    cin >>a;
    if (a==0) break;
    for (int i=1; i <=a ; i++)
        s+=i*i;
        cout << s << "\n";
    }
    return 0;
}
