// https://www.urionlinejudge.com.br/judge/pt/problems/view/1040

#include <stdio.h>
 
int main() {
 	float n[4];
	int a = 0; float b = 0, c, d;
	int i;
	for (i = 1; i <= 4; i++)
		scanf("%f", &n[i]);

	b = n[1] * 2 + n[2] * 3 + n[3] * 4 + n[4];

	d = (float)b / 10;
	printf("Media: %.1f\n", d);

	if (d >= 7)
		printf("Aluno aprovado.\n");
	else if (d < 5)
		printf("Aluno reprovado.\n");
	else
	{
		printf("Aluno em exame.\n");
		scanf("%f", &c);
		printf("Nota do exame: %.1f\n", c);
		if (c >= 5)
			printf("Aluno aprovado.\n");
		else
			printf("Aluno reprovado.\n");
		d = (d + c) / 2;
		printf("Media final: %.1f\n", d);

	}
    return 0;
}