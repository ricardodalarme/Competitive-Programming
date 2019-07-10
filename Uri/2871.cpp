// https://www.urionlinejudge.com.br/judge/pt/problems/view/2871

#include <bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,ans;
	while (cin >>a >>b){
		ans=0;
		for (int i = 0; i < a ; i++)
			for (int j = 0; j < b ; j++) {
				cin >> c;
				ans+=c;
			}
		printf("%d saca(s) e %d litro(s)\n",ans/60,ans - 60* (ans/60) );
	}
}