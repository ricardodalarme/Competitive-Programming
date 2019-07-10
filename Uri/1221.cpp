// https://www.urionlinejudge.com.br/judge/pt/problems/view/1221

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		c = b;
		bool d = false;
		if (b % 2 != 0)c++;
		for (int x = 2; x <= sqrt(c); x++)
		{
			if (b %x == 0)
			{
				d = true;
				break;
			}
		}
		if (d)
			cout << "Not Prime\n";
		else
			cout << "Prime\n";
	}
	return 0;
}
