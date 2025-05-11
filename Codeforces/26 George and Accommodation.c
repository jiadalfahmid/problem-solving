#include <stdio.h>

int main() {
    int n, count = 0, p, q;
    scanf("%d", & n);
    for (int j = 0; j < n; j++) {
        scanf("%d %d", & p, & q);
        if (p < q - 1) {
            count++;
        }

    }
    printf("%d", count);
}