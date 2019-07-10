// https://www.urionlinejudge.com.br/judge/pt/problems/view/1589

#include <iostream>
 
using namespace std;
 
int main() {
 	int a, b, c, d;
	scanf("%d", &a);

	int i;
	for (i = 1; i <= a; i++)
	{
		scanf("%d%d", &b, &c);
		printf("%d\n", b+c);
	}
    return 0;
}