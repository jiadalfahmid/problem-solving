#include <stdio.h>

int main() {
    int k, l, m, n, d, count = 0;
    scanf("%d\n%d\n%d\n%d\n%d", & k, & l, & m, & n, & d);
    for (int i = 1; i <= d; i++) {
        if (i % k == 0) {
            count++;
        }
        else if (i % l == 0) {
            count++;
        }
        else if (i % m == 0) {
            count++;
        }
        else if (i % n == 0) {
            count++;

        }
    }
    printf("%d", count);
    return 0;
}