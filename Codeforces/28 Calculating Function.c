#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);

    long long int sum = 0;
    if (n % 2 == 0) {
        sum = n / 2;
    } else {
        sum = (n - 1) / 2 - n;
    }

    printf("%lld", sum);
    return 0;
}