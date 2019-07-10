// https://www.urionlinejudge.com.br/judge/pt/problems/view/1115

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b;

	do 
	{
		scanf("%d%d", &a, &b);

		if (a > 0 && b >0)
			printf("primeiro\n");
		else if (a < 0 && b >0)
			printf("segundo\n");
		else if (a < 0 && b <0)
			printf("terceiro\n");
		else if (a > 0 && b <0)
			printf("quarto\n");

	} while (a !=0 && b!=0);
    return 0;
}