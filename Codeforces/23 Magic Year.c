#include <stdio.h>

int main() {
    int input, y = 1244;
    scanf("%d", & y);


    for (int i = 0; input < y; i++)
    {
        y++;
        int a = y / 1000;
        int b = (y / 100) % 10;
        int c = (y / 10) % 10;
        int d = y % 10;
        if (a != b && b != c && c != d && d != a && c != a && b != d)
        {
            printf("%d", y);
            return 0;
        }

    }
}