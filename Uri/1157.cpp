// https://www.urionlinejudge.com.br/judge/pt/problems/view/1157

#include <iostream>
 
using namespace std;
 
int main() {
 	int a = 0, b, c = 0;

	scanf("%d", &a);
	for (c = 1; c <= a; c++)
	{
		if (a %  c== 0)
			printf("%d\n", c);
	}
    return 0;
}