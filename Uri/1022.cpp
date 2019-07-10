// https://www.urionlinejudge.com.br/judge/pt/problems/view/1022

#include <bits/stdc++.h>
using namespace std;
inline int gcd(int a, int b)
{
    return b ? gcd(b, a % b) : abs(a);
}
inline long long lcm(int a, int b)
{
    if (a && b)
        return abs(a) / gcd(a, b) * (long long)abs(b);
    else
        return (long long)abs(a | b);
}
int main()
{
    int a;
    int n1, d1, n2, d2, r1, r2, r3, r4;

    char b, c;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        scanf("%d %c %d %c %d %c %d", &n1, &c, &d1, &b, &n2, &c, &d2);
        if (b == '*')
        {
            r1 = n1 * n2;
            r2 = d1 * d2;
        }
        else if (b == '/')
        {
            r1 = n1 * d2;
            r2 = d1 * n2;
        }
        else if (b == '+')
        {
            r1 = n1 *d2 +n2 *d1; 
            r2 =  d1 *d2 ;
        }
         else if (b == '-')
        {
            r1 = n1 *d2 -n2 *d1; 
            r2 =  d1 *d2 ;
        }
        r3 = r1 / gcd(r2, r1);
        r4 = r2 / gcd(r2, r1);
        cout << r1 << "/" << r2 << " = " << r3 << "/" << r4 << endl;
    }
    return 0;
}