// https://www.urionlinejudge.com.br/judge/pt/problems/view/1087

#include <bits/stdc++.h>;
using namespace std;

int main()
{
	while (true)
	{
		int a[5];
		for (int i = 1; i <= 4; i++)
			cin >> a[i];
		if (a[1] == 0 && a[3] == 0 && a[2] == 0 && a[4] == 0)
			break;
		else if (a[1] == a[3] && a[2] == a[4])
			printf("0\n");
		else	if (a[1] == a[3] || a[2] == a[4])
			printf("1\n");
		else if (abs(a[3]-a[1]) == abs(a[4] - a[2]))
		//else if (((a[1] + a[3]) % 2 == 0) == ((a[2] + a[4]) % 2 == 0))
			printf("1\n");
		else
			printf("2\n");
	}
	return 0;
}