// https://www.urionlinejudge.com.br/judge/pt/problems/view/1142

#include <iostream>
using namespace std;

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a * 4; i++)  {
        if (i % 4 == 0)
            printf("PUM\n");
        else
            printf("%d ", i);
    }
    return 0;
}