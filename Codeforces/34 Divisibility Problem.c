#include <stdio.h>

int main() {
    int n, a, b;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &a, &b);
        int remainder = a % b;
        if (remainder == 0) {
            printf("0\n");
        } else {
            printf("%d\n", b - remainder);
        }
    }

    return 0;
}
