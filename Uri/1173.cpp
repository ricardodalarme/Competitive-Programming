// https://www.urionlinejudge.com.br/judge/pt/problems/view/1173

#include <iostream>
 
using namespace std;
 
int main() {
 	int a[10];
	int i,b;
	scanf("%d", &b);
	for (i =0; i <= 9; i++)
	{
	
		printf("N[%d] = %d\n", i, b);
		b += b;
	}
    return 0;
}