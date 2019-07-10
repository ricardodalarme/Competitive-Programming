// https://www.urionlinejudge.com.br/judge/pt/problems/view/1216

#include <bits/stdc++.h>;
using namespace std;

int main()
{
	char a[1000];
	long long int b, c = 0, d = 0;
	while (scanf("%[^\n]", &a) != EOF)
	{
		scanf("%lld", &b);
		c += b;
		d++;
	}
	printf("%.1lf\n", c / (float)d);
}