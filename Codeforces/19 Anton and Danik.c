#include <stdio.h>

#include <string.h>


int main() {
    int x, A = 0, D = 0;
    scanf("%d", & x);
    char c[100001];
    scanf("%s", c);
    for (int i = 0; i < x; i++) {
        int a = c[i] - 'A';
        int b = c[i] - 'D';


        if (a == 3 && b == 0) {
            D++;
        }
        else if (a == 0 && b == -3) {
            A++;
        }
    }

    if (A > D) {
        printf("Anton");
    } else if (D > A) {
        printf("Danik");
    }
    else {
        printf("Friendship");
    }
    return 0;

}