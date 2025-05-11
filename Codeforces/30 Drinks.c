#include <stdio.h>

int main() {
    int n;
    long long int sum = 0;
    scanf("%d", & n);
    int d[n];

    for(int i = 0; i<n; i++){
        scanf("%d ", &d[i]);
    }
    
    for(int i = 0; i < n; i++){
        sum = sum + (n * d[i]);}
        
        double result = (double)sum/(n*n);
    printf("%.12lf", result);
    
    return 0;
}