// https://www.urionlinejudge.com.br/judge/pt/problems/view/1172

#include <iostream>
 
using namespace std;
 
int main() {
 	int a[10];
	int i;
	for (i =0; i <= 9; i++)
	{
		scanf("%d", &a[i]);
		if (a[i] <= 0)a[i] = 1;
		printf("X[%d] = %d\n", i, a[i]);
	}
    return 0;
}