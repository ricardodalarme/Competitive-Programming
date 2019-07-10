// https://www.urionlinejudge.com.br/judge/pt/problems/view/1116

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b,c;
	scanf("%d", &a);

	int i;
	for (i=1; i<=a;i++ )
	{
		scanf("%d%d", &b, &c);
		if (c ==0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", b /(float)c);
	
	} 
    return 0;
}