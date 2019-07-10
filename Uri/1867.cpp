// https://www.urionlinejudge.com.br/judge/pt/problems/view/1867

#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	while (true){
		cin >> a>>b;
		if (a[0]=='0' && b==a) break;
		int n1,n2;
		do{
			n1=0;
			for (int i = 0 ; i < a.size();i++)
				n1+=a[i]-'0';
			a=to_string(n1);
		} while (a.size() !=1);
		do{
			n2=0;
			for (int i = 0 ; i < b.size();i++)
				n2+=b[i]-'0';
			b=to_string(n2);
		} while (b.size() !=1);

		if (n1>n2)
			cout << "1\n";
		else if (n1<n2)
			cout << "2\n";
		else
			cout << "0\n";
	}
    return 0;
}
