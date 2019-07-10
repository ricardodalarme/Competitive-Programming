// https://www.urionlinejudge.com.br/judge/pt/problems/view/1146

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, c;
voltar:
	scanf("%d", &a);
	if (a > 0)
	{
		for (c = 1; c <= a; c++)
		{
			if (c != a)
				printf("%d ", c);
			else
				printf("%d\n", c);
		}
		goto voltar;

	}
    return 0;
}