// https://www.urionlinejudge.com.br/judge/pt/problems/view/1133

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, b, c = 0;
	int i = 0;

	scanf("%d%d", &a, &b);

	if (a <= b)
	{
		for (int i = a + 1; i <= b - 1; i++)
			if (i % 5 == 2 || i % 5 == 3)printf("%d\n", i);
	}
	else
		for (int i = b + 1; i <= a - 1; i++)
			if (i % 5 == 2 || i % 5 == 3)printf("%d\n", i);
    return 0;
}