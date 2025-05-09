#include <stdio.h>

int main() {
	int n,m,count = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++)
	{
	    int x;
	    scanf("%d", &x);
	    if (x <= m && x>0){
	        count++;
	    }
	    else
	    {
	        count += 2;
	    }
	}
	printf("%d", count);

}

