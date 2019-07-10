// https://www.urionlinejudge.com.br/judge/pt/problems/view/1403

#include <bits/stdc++.h>
using namespace std;
int num[10001];
int main()
{
    int a, b, c, max, max2;
    while (true)
    {
        cin >> a >> b;
        if (a == 0 && b == 0)
            break;
        max = 0;
        max2 = 0;
        memset(num, 0, sizeof(num));
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
            {
                cin >> c;
                num[c]++;
            }
        for (int i = 1; i <= 10000; i++)
        {
            if (num[i] > num[max])
            {
                max2 = max;
                max = i;
            }
            else if (num[i] > num[max2])
                max2=i;
        }

        for (int i = 1; i <= 10000; i++)
            if (num[i] == num[max2])
                printf("%d ", i);
        printf("\n");
    }
    return 0;
}