#include <stdio.h>

int main()
{
    int n, k, approved = 0;
    scanf("%d%d", & n, & k);
    int participant[n];
    if (k >= 1 && n >= k)
        for (int i = 0; i < n; i++) {
            scanf("%d", & participant[i]);
        }
    for (int i = 0; i < n; i++) {
        if (participant[i] >= participant[k-1] && participant[i] > 0) {
            approved++;
        }
    }
    printf("\n%d", approved);

    return 0;
}