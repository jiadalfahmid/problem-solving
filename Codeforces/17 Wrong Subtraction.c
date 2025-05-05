#include <stdio.h>

int main() {

    int n, t;

    scanf("%d %d", & n, & t);

    for (int i = 0; i < t; i++) {
        if (n % 10 == 0) {
            n = n / 10;
        }
        else if (n % 10 > 0) {
            n--;
        }
    }

    printf("%d", n);

}