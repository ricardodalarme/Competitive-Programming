// https://www.urionlinejudge.com.br/judge/pt/problems/view/1250

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,ans;
	cin >>a;
	vector <int> ve;
	string tt;
	for (int i = 0 ; i < a ; i++){
		ans=0;
		cin >> b;
		ve.clear();
		ve.resize(b);
		for (int j= 0 ; j <b; j++)
			cin >> ve[j];
		cin >> tt;
		for (int j= 0 ; j <b; j++)
			if (tt[j] == 'J' && ve[j] >2)
				ans++;
			else if (tt[j] == 'S' && ve[j] <3)
				ans++;
		cout << ans << endl;
	}
	return 0;
}