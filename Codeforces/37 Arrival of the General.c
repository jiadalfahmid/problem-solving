#include <stdio.h>

int main() {
    int a[101], n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[0], min = a[0];
    int maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
        if (a[i] <= min) {
            min = a[i];
            minIndex = i;
        }
    }

    int swaps = maxIndex + (n - 1 - minIndex);
    if (maxIndex > minIndex) {
        swaps--; 
    }

    printf("%d\n", swaps);
    return 0;
}
