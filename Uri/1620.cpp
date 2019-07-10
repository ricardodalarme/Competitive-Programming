// https://www.urionlinejudge.com.br/judge/pt/problems/view/1620

#include <bits/stdc++.h>
using namespace std;

int main()
{
	double a;
	do
	{
		cin >> a;
		if (a > 0)
		{
			double b = a + (a - 3);
			printf("%.6lf\n", (b - a) / a);
		}
	} while (a > 0);
	return 0;
}
