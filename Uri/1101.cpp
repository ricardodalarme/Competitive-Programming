// https://www.urionlinejudge.com.br/judge/pt/problems/view/1101

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    do  {
        int s = 0;
        scanf("%d%d", &b, &c);
        if (b > 0 && c > 0) {
            if (b > c)
            {
                int d = b;
                b = c;
                c = d;
            }
            for (int x = b; x <= c; x++) {
                printf("%d ", x);
                s += x;
            }

            printf("Sum=%d\n", s);
        }
    } while (b > 0 && c > 0);
    return 0;
}