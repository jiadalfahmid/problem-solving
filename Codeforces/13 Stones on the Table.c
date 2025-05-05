#include <stdio.h>

#include <string.h>


int main() {
    int n,count = 0;
    char s[1000];
    scanf("%d", &n);
    scanf("%s", s);
    
    for(int i = 0; i < n; i++){
        int a = s[i] - 'A';
        int b = s[i+1] - 'A';
        if(a == b){
            count++;
        }
    }
    printf("%d", count);
    
    
    return 0;
}