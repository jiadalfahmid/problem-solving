#include <stdio.h>

int main() {
    int n, a = 0, o;
    scanf("%d", & n);


    for (int i = 0; i < n; i++)
    {
        scanf("%d", &o);
        if(o>0){
            a++;
        }

    }
    if(a>0){
        printf("HARD");
    }
    else
        printf("EASY");
}