// https://www.urionlinejudge.com.br/judge/pt/runs/code/11617661

#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,d;
	while (scanf("%d", &a)!=EOF){
        cin >>b;
        vector <int> c;
        c.resize(a);
        for (int i = 0 ; i < a ;i++)
            cin >> c[i];
        sort(c.rbegin(),c.rend());
        for (int i = 0 ; i < b ;i++){
            cin >>d;
            cout << c[d-1]<<endl;
        }
	}
    return 0;
}
