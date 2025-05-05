#include <stdio.h>

#include <string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; i< strlen(s); i++) {
        if (i == 0 && s[0] > 96 && s[0] < 123) {
            printf("%c", s[0] - 32);
        }
        else 
        printf("%c",s[i]);
    }


}