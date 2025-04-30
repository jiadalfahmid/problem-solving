#include <stdio.h>

int main()
{
    int n, x = 0;
    char input[4];

    scanf("%d", & n);

    for (int i = 0; i < n; i++) {
        scanf("%s", input);
        if (input[0] == '-' || input[2] == '-') {
            x--;
        }
        else if (input[0] == '+' || input[2] == '+') {
            x++;
        }
    }
    printf("%d", x);

    return 0;
}