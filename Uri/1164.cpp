// https://www.urionlinejudge.com.br/judge/pt/problems/view/1164

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b;
	int i;
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{
		scanf("%d", &b);
		int i2;
		int s = 0;
		for (i2 = 1; i2 <= b-1; i2++)
			if (b% i2 == 0)
				s += i2;
		if (s == b)
			printf("%d eh perfeito\n", b);
		else
			printf("%d nao eh perfeito\n", b);
	}
    return 0;
}