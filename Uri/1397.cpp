// https://www.urionlinejudge.com.br/judge/pt/problems/view/1397

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a;
	do
	{
		int b, c, d = 0, e = 0;
		cin >> a;
		if (a > 0)
		{
			for (int i = 1; i <= a; i++)
			{
				cin >> b >> c;
				if (b > c)
					d++;
				else	if (b < c)
					e++;
			}
			cout << d << " " << e <<"\n";
		}
	} while (a !=0);
	return 0;
}
