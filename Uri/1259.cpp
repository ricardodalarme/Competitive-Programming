// https://www.urionlinejudge.com.br/judge/pt/problems/view/1259

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long int> a,b;
   long long int n,z;
    cin >>n;
    for (int i =0; i <n; i++)
    {
        cin >>z;
        if (z & 1)
            b.push_back(z*-1);
        else
            a.push_back(z);
    }
    sort(a.begin(), a.end());
     sort(b.begin(), b.end());
    for (int i=0; i <a.size(); i++)
        cout << a[i]<<"\n";
    for (int i=0; i <b.size(); i++)
        cout << b[i] *-1<<"\n";
    return 0;
}
