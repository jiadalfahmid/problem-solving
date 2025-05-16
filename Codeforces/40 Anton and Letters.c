#include <stdio.h>
#include <string.h>

int main() {
    int count = 0, dis[128] = {0};
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int len = strlen(s);
    for (int i = 0; i < len && s[i] != '}'; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && dis[s[i]] == 0) {
            count++;
            dis[s[i]] = 1;
        }
    }
    printf("%d", count);
    return 0;
}