// https://www.urionlinejudge.com.br/judge/pt/problems/view/1174

#include <iostream>
 
using namespace std;
 
int main() {
 	float a[100];
	int i;

	for (i = 0; i <= 99; i++)
	{
		scanf("%f", &a[i]);
		if (a[i] <= 10)
			printf("A[%d] = %.1f\n", i, a[i]);
	}
    return 0;
}