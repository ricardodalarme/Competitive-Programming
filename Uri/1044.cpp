// https://www.urionlinejudge.com.br/judge/pt/problems/view/1044

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, b;

	scanf("%d%d", &a, &b);

	if (b > a)
	{
		if (b % a == 0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
	}
	else
		if (a % b == 0)
			printf("Sao Multiplos\n");
		else
			printf("Nao sao Multiplos\n");
    return 0;
}