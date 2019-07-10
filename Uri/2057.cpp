// https://www.urionlinejudge.com.br/judge/pt/problems/view/2057

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b, c, d;
	scanf("%d%d%d", &a, &b, &c);
	d = a + b + c;
	if (d >= 24 )d-= 24;
	else  if (d  <0)d += 24;
	printf("%d\n", d);

    return 0;
}