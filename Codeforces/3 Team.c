#include <stdio.h>

int main()
{
	int n,a,b,c,s=0;
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {
		scanf("%d%d%d",&a,&b,&c);
		if(a==1) {
			if(b==1 || c==1)
				s++;
		}
		else if(b==1) {
			if(c==1 || a==1)
				s++;
		}
		else if(c==1) {
			if(b==1 || a==1)
				s++;
		}
	}
	printf("%d", s);

	return 0;
}