#include <stdio.h>

int main() {
    int a, b, y = 0;

    scanf("%d  %d", & a, & b);

    for (int i = 0; a <= b; i++) {
        a = a * 3;
        b = b * 2;
        y++;

    }
    printf("%d", y);
}