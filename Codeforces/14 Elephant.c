#include <stdio.h>



int main() {
    int x,n = 0;
    scanf("%d", &x);
    
    n = x / 5;
    if(x%5!=0){
        n++;
    }
    
    printf("%d", n);
    
    
    return 0;
}