#include <stdio.h>

#include <string.h>

int main() {
    char userName[101];

    int diff[26] = {
        0
    };
    int uniqueCounter = 0;

    fgets(userName, sizeof(userName), stdin);


    for (int i = 0; i <= strlen(userName); i++) {
        char thisChar = userName[i];
        if (thisChar >= 'a' && thisChar <= 'z')
            if (diff[thisChar - 'a'] == 0) {
                uniqueCounter++;
                diff[thisChar - 'a'] = 1;
            }
    }

    if (uniqueCounter % 2 == 0) {
        printf("CHAT WITH HER!");
    }
    else {
        printf("IGNORE HIM!");
    }

}