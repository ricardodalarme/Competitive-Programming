// https://www.urionlinejudge.com.br/judge/pt/problems/view/1099

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        int s = 0;
        scanf("%d%d", &b, &c);
        if (b > c)
        {
            int d = b;
            b = c;
            c = d;
        }
        for (int x = b + 1; x <= c - 1; x++)
            if (x % 2 != 0)
                s += x;
        printf("%d\n", s);
    }
    return 0;
}