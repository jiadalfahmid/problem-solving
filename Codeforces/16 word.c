#include <stdio.h>

#include <string.h>

int main() {
    char s[101];
    int small = 0, capital = 0;
    scanf("%s", s);
    int len = strlen(s);

    for (int i = 0; i < len; i++) {

        if (s[i] > 96 && s[i] < 123) {
            small++;
        }
        if (s[i] > 64 && s[i] < 91) {
            capital++;
        }
    }
    if (small >= capital) {
        for (int i = 0; i < len; i++) {
            if (s[i] > 64 && s[i] < 91) {
                s[i] = s[i] + 32;
            }
        }
    }
    else {
        for (int i = 0; i < len; i++) {
            if (s[i] > 96 && s[i] < 123) {
                s[i] = s[i] - 32;
            }
        }
        
    }
            printf("%s\n", s);
}