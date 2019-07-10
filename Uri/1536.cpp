// https://www.urionlinejudge.com.br/judge/pt/problems/view/1536

#include <bits/stdc++.h>;
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		int a, b, a1, b1, a2, b2;
		scanf("%d x %d %d x %d", &a1, &b1, &b2, &a2);
		a = a1 + a2;
		b = b1 + b2;
		if (a > b)
			printf("Time 1\n");
		else if (a < b)
			printf("Time 2\n");
		else if (b1 > a2)
			printf("Time 2\n");
		else if (a2 > b1)
			printf("Time 1\n");
		else
			printf("Penaltis\n");
	}
	return 0;
}