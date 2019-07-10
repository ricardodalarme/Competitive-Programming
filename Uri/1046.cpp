// https://www.urionlinejudge.com.br/judge/pt/problems/view/1046

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, b, c=0;
	scanf("%d%d", &a, &b);
	if (a >= b)
		c = 24 - a + b;
	else
		c = b - a;
	printf("O JOGO DUROU %d HORA(S)\n", c);
    return 0;
}