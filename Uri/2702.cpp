// https://www.urionlinejudge.com.br/judge/pt/problems/view/2702

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    int s = 0;
    if (d - a > 0)
        s += (d - a);
    if (e - b > 0)
        s += (e - b);
    if (f - c > 0)
        s += (f - c);
    printf("%d\n", s);
    return 0;
}
