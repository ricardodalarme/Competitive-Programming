// https://www.urionlinejudge.com.br/judge/pt/problems/view/1379

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int a,b;
	while (true){
		cin >>a>>b;
		if (a==0 && b==0) break;
		cout << 2*a-b << endl;
	}
	return 0;
}