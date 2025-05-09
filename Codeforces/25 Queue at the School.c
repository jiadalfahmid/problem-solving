#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", & n, & t);
    char s[n];
    scanf("%s", s);
    for (int j = 0; j < t; j++) {
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                s[i] = 'B';
                s[i - 1] = 'G';
                i--;
            }
        }

    }
printf("%s", s);
}