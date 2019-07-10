// https://www.urionlinejudge.com.br/judge/pt/problems/view/2455

#include <bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c,d;
   cin >> a>>b>>c>>d;
   if (a * b == c *d)
       cout << "0\n";
   else if (a * b < c *d)
       cout << "1\n";
   else
        cout << "-1\n";
    return 0;
}