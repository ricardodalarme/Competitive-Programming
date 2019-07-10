// https://www.urionlinejudge.com.br/judge/pt/problems/view/1743

#include <bits/stdc++.h>
using namespace std;

int main()
{
	bool a = false;
	int b[6], c;
	for (int i = 1; i <= 5; i++)
	{
		cin >> c;
		b[i] = c;
	}
	for (int i = 1; i <= 5; i++)
	{
		cin >> c;
		b[i] += c;
		if (b[i] != 1)
			a = true;
	}
	if (a)
		cout << "N\n";
	else
		cout << "Y\n";
	return 0;
}
