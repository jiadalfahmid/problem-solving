#include <stdio.h>

int main() {
    int s[4], count = 0, max = 4;

    for (int i = 0; i < 4; i++) {
        scanf("%d ", & s[i]);
    }
    for (int i = 3; i >= 0; i--) {
        for (int j = 0; j < 4; j++) {
            if (i == j) {
                continue;
            } else if (s[i] == s[j]) {
                count++;
            }

        }
    }
    if (count == 2) {
        printf("1");
    } else if (count == 0) {
        printf("0");
    } else if (count == 6 || count == 4) {
        printf("2");
    } else {
        printf("3");
    }

}