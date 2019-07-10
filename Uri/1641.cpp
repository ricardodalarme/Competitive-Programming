// https://www.urionlinejudge.com.br/judge/pt/problems/view/1641

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i = 1;
	int a,b,c;
	while (true){
		cin >>a;
		if (a==0) break;
		cin >>b>>c;
		if (a*2 >= sqrt(pow(b,2) + pow(c,2)))
			printf("Pizza %d fits on the table.\n", i);
		else
			printf("Pizza %d does not fit on the table.\n", i );
	i++;
	}
    return 0;
}