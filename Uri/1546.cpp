// https://www.urionlinejudge.com.br/judge/pt/problems/view/1546

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a,b,c;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		cin >> b;
		for (int x = 1; x <= b; x++)
		{
			cin >> c;
			switch (c)
			{
			case 1:
				cout << "Rolien\n";
				break;
			case 2:
				cout << "Naej\n";
				break;
			case 3:
				cout << "Elehcim\n";
				break;
			case 4:
				cout << "Odranoel\n";
				break;
			}
		}
	}
	return 0; 
}
