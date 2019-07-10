// https://www.urionlinejudge.com.br/judge/pt/problems/view/1065

#include <stdio.h>
 
int main() {
  	int n[5];
	int a = 0;
	int i;
	for ( i = 1; i <= 5; i++)
	{
		scanf("%d", &n[i]);

		if (n[i] % 2 == 0)
			a++;
	}
	printf("%d valores pares\n", a);
    return 0;
}