// https://www.urionlinejudge.com.br/judge/pt/problems/view/1467

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a, b, c;
	while (scanf("%d %d %d", &a, &b, &c) != EOF)
	{
		if (a == b && a == c)
			cout << "*\n";
		else if (a != b && b == c)
			cout << "A\n";
		else if (b != c && a == c)
			cout << "B\n";
		else
			cout << "C\n";
	}
	return 0; 
}
