#include <stdio.h>

#include <string.h>


int main() {
    int w, n, k, b = 0, c = 0;
    scanf("%d %d %d", & k, & n, & w);

    for (int i = 1; i <= w; i++) {
        c += k * i;
    }

    if (c <= n) {
        printf("0");
        return 0;
    }

    printf("%d\n", c - n);

    return 0;
}