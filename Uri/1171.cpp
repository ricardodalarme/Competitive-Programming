// https://www.urionlinejudge.com.br/judge/pt/problems/view/1171

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    int n[2001];
    cin >> a;
    for (int i =1; i <=2000; i++)
        n[i] =0;
    for (int i =1; i <=a; i++)
    {
        cin >> b;
        n[b]++;
    }
    for (int i =1; i <=2000; i++)
        if (n[i] >0)
            cout << i << " aparece " << n[i] << " vez(es)\n";
    return 0;
}
