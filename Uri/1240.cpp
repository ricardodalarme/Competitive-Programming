// https://www.urionlinejudge.com.br/judge/pt/problems/view/1240

#include <bits/stdc++.h>
using namespace std;
int main() {
	string a, b;
	int q;
	cin >> q;
	for (int h = 1; h <= q; h++) {
		bool c = false;
		cin >> a >> b;
		if (b.size() <= a.size()) {
			c = true;
			for (int i = b.size(); i >= 0; i--) {
				if (a[a.size() - b.size() + i] != b[i]) {
					c = false;
					break;
				}
			}
		}
		if (c)
			cout << "encaixa\n";
		else
			cout << "nao encaixa\n";
	}
}