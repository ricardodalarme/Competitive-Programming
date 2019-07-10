// https://www.urionlinejudge.com.br/judge/pt/problems/view/1064

#include <stdio.h>
 
int main() {
 	float n[6];
	int a = 0; float b = 0;
	int i;
	for (i = 1; i <= 6; i++)
	{
		scanf("%f", &n[i]);

		if (n[i] > 0)
		{
			a++;
			b += n[i];
		}
	}
	b = (float)b / a;
	printf("%d valores positivos\n%.1f\n", a, b);

    return 0;
}