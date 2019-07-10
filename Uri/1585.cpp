// https://www.urionlinejudge.com.br/judge/pt/problems/view/1585

#include <bits/stdc++.h>;
using namespace std;

int main()
{
	int a, b,c;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b >> c;
		cout << (b * c) / 2 << " cm2\n";
	}
}