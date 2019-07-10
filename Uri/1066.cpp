// https://www.urionlinejudge.com.br/judge/pt/problems/view/1066

#include <stdio.h>

int main() {

	int n[5];
	int par = 0, impar = 0, posi = 0, nega = 0;
    int i;
	for ( i = 1; i <= 5; i++)
	{
		scanf("%d", &n[i]);

		if (n[i] > 0)
			posi++;
		else if (n[i] < 0)
			nega++;

		if (n[i] % 2 != 0)
			impar++;
		else
			par++;
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, impar, posi, nega);
    return 0;
}
