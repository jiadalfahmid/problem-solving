#include <stdio.h>

int main() {
    int a, b, n, t = 0, m = 0;
    scanf("%d", & n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", & a, & b);
        t = t - a + b;
        if (t > m) {
            m = t;
        }
    }
    printf("%d", m);
}