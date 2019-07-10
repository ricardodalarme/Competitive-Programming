// https://www.urionlinejudge.com.br/judge/pt/problems/view/2770

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int a, b, c,d,e;
	while (scanf("%lld %lld %lld", &a, &b, &c)!=EOF)
	{
		for (long int i = 1; i <= c; i++)
		{
			cin >> d >> e;
			if (d <= a && e <= b)
				cout << "Sim\n";
			else if (d <= b && e <= a)
				cout << "Sim\n";
			else
				cout << "Nao\n";
		 }
	}
	return 0;
}
