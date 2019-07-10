// https://www.urionlinejudge.com.br/judge/pt/runs/code/11655852

#include <bits/stdc++.h>
using namespace std;
inline long long int gcd(int a, int b){
	return b? gcd(b,a%b):abs(a);
}
inline long long int lcm(int a,int b){
	if (a &&b)
		return abs(a) / gcd(a, b) * (long long) abs(b);
	else
		return (long long) abs (a|b);
}
int main()
{
	int a,b,c;
	while (true){
		cin >>a>>b>>c;
		if (a==0 && b== 0 && c==0) break;
		cout << a/b + a/c -a/ lcm(b,c) <<endl;
	}
	return 0;
}