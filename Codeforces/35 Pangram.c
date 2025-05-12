#include <stdio.h>

#include <ctype.h>

int main() {
    int n, count = 0;
    char s[10001], diff[26] = {
        0
    };

    scanf("%d", & n);
    scanf("%s", s);


    if (n < 26) {
        printf("NO");
    } else {
        for (int i = 0; i < n; i++) {
            int ch = tolower(s[i]);
            if (ch >= 'a' && ch <= 'z') {
                int idx = ch - 'a';
                if (!diff[idx]) {
                    count++;
                    diff[idx] = 1;
                }
            }
        }
        if (count == 26) {
            printf("YES");
        } else {
            printf("NO");
        }
    }



    return 0;
}