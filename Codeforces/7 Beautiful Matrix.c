#include <stdio.h>

int main()
{
    int matrix[5][5], a, b, count = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", & matrix[i][j]);
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (matrix[i][j] == 1) {
                a = i;
                b = j;
                if (a > 2) {
                    int n = a - 2;
                    count += n;
                }
                if (a < 2) {
                    int n = 2 - a;
                    count += n;
                }
                if (b > 2) {
                    int n = b - 2;
                    count += n;
                }
                if (b < 2) {
                    int n = 2 - b;
                    count += n;
                }
            }
        }
    }

    printf("%d", count);

    return 0;
}