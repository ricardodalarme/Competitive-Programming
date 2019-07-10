// https://www.urionlinejudge.com.br/judge/pt/problems/view/1175

#include <iostream>
 
using namespace std;
 
int main() {
 	int a[20],b[20];
	int i;

	for (i = 0; i <= 19; i++)
		scanf("%d", &a[i]);

	for (i = 0; i <= 19; i++)
	{
		b[i] = a[19 - i];
		b[19 - i] = a[i];
		printf("N[%d] = %d\n", i, b[i]);
	}
    return 0;
}