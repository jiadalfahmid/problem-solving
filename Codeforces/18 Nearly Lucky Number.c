#include <stdio.h>

#include <string.h>


int main() {
    char c[1000];
    scanf("%s", c);
    int n = 0;
    for (int i = 0; i < strlen(c); i++) {
        int a = c[i] - '7';
        int b = c[i] - '4';

        if ((a == -3 && b == 0) || (a == 0 && b == 3)) {
            n++;
        }
    }

    if (n == 7 || n == 4) {
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;

}