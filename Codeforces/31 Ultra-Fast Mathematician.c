#include <stdio.h>
#include <string.h>

int main() {
	char s[10000], t[10000];
	
	scanf("%s\n%s", s, t);
	int len = strlen(s);
	
	for(int i = 0; i < len; i++){
	    if(s[i] != t[i]){
	        printf("1");
	    }
	    else{
	        printf("0");
	    }
	}

}

