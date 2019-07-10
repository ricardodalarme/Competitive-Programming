// https://www.urionlinejudge.com.br/judge/pt/problems/view/1241

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string b,c;
	cin >>a;

	for (int i = 0 ; i < a;i++){
		cin >> b>>c;
		if (c.size() > b.size()){
			cout << "nao encaixa\n";
			continue;
		}
		bool ans=true;
		for (int i = 0 ; i < c.size();i++)
			if (b[b.size()-c.size() + i] != c[i]){
				ans=false;
				break;
			}
		if (ans)
			cout << "encaixa\n";
		else
			cout << "nao encaixa\n";
	}
    return 0;
}
