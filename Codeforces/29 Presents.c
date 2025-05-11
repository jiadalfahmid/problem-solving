#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);
    int p[n], recever[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", & p[i]);
        recever[p[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", recever[i]);
    }
    return 0;
}