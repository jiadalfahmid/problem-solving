#include <stdio.h>

int main()
{
    int W;
    scanf("%d", &W);
    if(W<=100 && W>3 && W%2==0)
        printf("Yes");
    else
        printf("No");
    return 0;
}