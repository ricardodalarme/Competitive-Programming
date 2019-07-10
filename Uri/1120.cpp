// https://www.urionlinejudge.com.br/judge/pt/problems/view/1120

#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b,c;
	while (true)
	{
		 c.clear();

		cin>> a>>b;
		if (a[0]=='0' && b[0]=='0') break;
		for (int i = 0 ; i < b.size();i++)
			if (b[i] != a[0])
				{
				if (c.size() == 0 && b[i]=='0') continue;
				c+=b[i];
				}
		if (c.size()>0)
			cout << c << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}
