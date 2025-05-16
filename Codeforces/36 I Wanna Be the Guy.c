#include <stdio.h>

int main() {
	int n, p[101], q[101], all[101] = {0}, count =0;
	
	scanf("%d", &n);
	scanf("%d", &p[0]);
	for(int i = 1; i <= p[0]; i++){
	    scanf("%d ", &p[i]);
	}
	scanf("%d", &q[0]);
	for(int i = 1; i <= q[0]; i++){
	    scanf("%d ", &q[i]);
	}
	for(int i = 0; i <= p[0]; i++){
	    for(int j = 1; j<=p[0]; j++){
	        if(all[p[j]]==0){
	            all[p[j]] = 1;
	            count++;
	            
	        }
	    }
	}
	for(int i = 0; i <= q[0]; i++){
	    for(int j = 1; j<=q[0]; j++){
	        if(all[q[j]]==0){
	            all[q[j]] = 1;
	            count++;
	            
	        }
	    }
	}
	
	if(count==n){
	    printf("I become the guy.");
	}
	else{
	    printf("Oh, my keyboard!");
	}

}

