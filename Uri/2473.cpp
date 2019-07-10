// https://www.urionlinejudge.com.br/judge/pt/problems/view/2473

#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector <int> a;
	int b = 0;
	for (int i = 1; i <= 6; i++)
	{
		int n;
		scanf("%d", &n);
		a.push_back(n);
	}
	for (int i = 1; i <= 6; i++)
	{
		int n;
		scanf("%d", &n);
		if (find(a.begin(), a.end(), n) != a.end())
			b++;
	}

	if (b == 3)
		cout << "terno\n";
	else if (b == 4)
		cout << "quadra\n";
	else if (b == 5)
		cout << "quina\n";
	else if (b == 6)
		cout << "sena\n";
	else
		cout << "azar\n";
}