#include <stdio.h>

#include <string.h>


int main() {
    char str[1000], str2[1000];
    fgets(str, sizeof(str), stdin);
    scanf("%s", str2);
    int len = strlen(str), i, j;
    char strev[len + 1];

    if (strlen(str) - 1 != strlen(str2)) {
        printf("NO");
        return 0;

    }

    int p = 1;

    for (j = 0, i = len - 2; j < len && i >= 0; j++, i--) {
        strev[j] = str[i];
        if (strev[j] != str2[j]) {
            p = 0;
            break;
        }
    }
    strev[len] = '\0';
    str2[len - 1] = '\0';

    if (p == 1) {
        printf("YES");
        return 0;
    }

    printf("NO");
    return 0;
}