// https://www.urionlinejudge.com.br/judge/pt/runs/code/12146403

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string a;
	getline(cin, a);
	if (a == "roraima" || a == "acre" || a == "amapa" || a == "amazonas" || a == "para" || a == "rondonia" || a == "tocantins")
		cout << "Regiao Norte\n";
	else
		cout << "Outra regiao\n";
}