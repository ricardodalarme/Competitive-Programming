// https://www.urionlinejudge.com.br/judge/pt/problems/view/1103

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c, d;
	do
	{
		cin >> a >> b >> c >> d;
		if (a > 0 || b > 0 || c > 0 || d > 0)
		{
			if (a == 0)a = 24;
			if (c == 0)c = 24;
			int e = (c * 60 + d)- (a * 60 + b);
			if (e < 0)e += 1440;
			cout << e <<"\n";
		}
	} while (a > 0 || b > 0 || c > 0 || d > 0);
	return 0;
}