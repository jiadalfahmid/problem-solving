#include <stdio.h>

int main() {
	int n;
	
	scanf("%d", &n);
	
	printf("I hate ");
	
	for(int i = 1; i < n; i++){
	    if(i%2==1)
	    printf("that I love ");
	    else
	    printf("that I hate ");
	}
	printf("it");

}

