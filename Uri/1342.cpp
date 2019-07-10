// https://www.urionlinejudge.com.br/judge/pt/problems/view/1342

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int p, q,t1,t2,t3,x,a,b;
	vector <int> pp;
	vector <bool> ppb;
	while (true){
		cin >> p>>q;
		if (p == 0 && p ==q ) break;
		cin >>t1 >>t2>>t3>>x;
		pp.clear();
		pp.resize(p+1);
		ppb.clear();
		ppb.resize(p+1);
		for (int i = 1 ; i <= p; i++)
			ppb[i]=false;

		int atual =1,vencedor=0;
		for (int i = 1 ; i <= x; i++){
			cin >>a>>b;
			voltar:
			if (ppb[atual] == true){
				ppb[atual]=false;
				atual+=1;
				if (atual >p) atual=1;
				goto voltar;
			}
			
			pp[atual] += a+b;

			if (pp[atual] == t1 || pp[atual] == t2 || pp[atual] == t3)
				ppb[atual] =true;
			if (pp[atual]>q && vencedor ==0)
				vencedor=atual;
			atual++;
			if (atual >p) atual=1;
		}

		cout << vencedor << endl;
	}
	return 0;
}