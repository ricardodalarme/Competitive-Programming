// https://www.urionlinejudge.com.br/judge/pt/problems/view/1071

#include <iostream>
 
using namespace std;
 
int main() {
 
	int a = 0, b = 0, c = 0;
	scanf("%d%d", &a, &b);

	if (a > b)
	{
		for (int i = b + 1; i <= a - 1; i++)
			if (i % 2 != 0)
				c += i;
	}
	else if (a < b)
		for (int i = a + 1; i <= b - 1; i++)
			if (i % 2 != 0)
				c += i;

	printf("%d\n", c);

    return 0;
}