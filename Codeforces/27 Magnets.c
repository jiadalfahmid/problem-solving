#include <stdio.h>

#include <string.h>

int main() {
    int n, count = 0;
    scanf("%d", & n);
    char m[n][3];
    for (int i = 0; i < n; i++) {
        scanf("%s", m[i]);
    }
    for (int j = 0; j < n ; j++) {

        if (m[j][0] != m[j + 1][0]) {
            count++;
        }

    }
    printf("%d", count);
    return 0;
}