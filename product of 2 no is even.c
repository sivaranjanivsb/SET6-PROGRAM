#include <stdio.h>

int main(void) {
	int n,m,p;
	scanf("%d%d",&n,&m);
	p=(m*n);
	printf("%d",p);
	
	if(p%2==0)
	printf("\n even");
	
	return 0;
}
