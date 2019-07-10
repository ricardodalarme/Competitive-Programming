// https://www.urionlinejudge.com.br/judge/pt/problems/view/2874

#include <bits/stdc++.h>
using namespace std;
int bin(string a){
	int ans = 0;
	reverse(a.begin(), a.end());
	for (int i = 0 ; i < a.size();i++)
		ans+=(a[i] - '0') * pow(2, i); 

	return ans;
}

int main(){
	int a;
	string b;
	while (cin >>a){
		for (int i = 0 ; i < a ; i++){
			cin >>b;
			cout << (char)bin(b) ;
		}
		cout << endl;
	}
}