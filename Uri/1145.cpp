// https://www.urionlinejudge.com.br/judge/pt/problems/view/1145

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, b, c = 0;

	scanf("%d%d", &a, &b);
	for (c = 1; c <= b; c++)
	{
		if (c %a == 0)
			printf("%d\n", c);
		else
			printf("%d ", c);
	}
    return 0;
}