// https://www.urionlinejudge.com.br/judge/pt/problems/view/1554

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, less;
  long  double x, y, x2, y2, less_d, d;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b >> x >> y;
        less = 0, less_d =0x7F800000;
        for (int j = 0; j < b; j++)
        {
            cin >> x2 >> y2;

            d = sqrt(pow(x2 - x, 2) + pow(y2 - y, 2));
            if (d< less_d-0.1)
            {
                less_d = d;
                less = j;
            }
        }
        cout << less + 1 << endl;
    }
}
// roberto roberto edmilson joao paulo