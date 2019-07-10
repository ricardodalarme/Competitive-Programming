// https://www.urionlinejudge.com.br/judge/pt/problems/view/1794

#include <bits/stdc++.h>;
using namespace std;

int main()
{
	int a, b,c,d,e;
	cin >> a >>b>>c>>d>>e;
	
	if (a >= b && a <= c && a >= d && a <= e)
		cout << "possivel\n";
	else
		cout << "impossivel\n";
}