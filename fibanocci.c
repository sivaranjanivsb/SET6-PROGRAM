#include <stdio.h>

int main(void) {
	int a,b,t,i,n;
	scanf("%d %d %d",&a,&b,&n);
	t=a+b;
	printf("%d \n%d\n%d\n",a,b,t);
	
	for(i=0;i<n-1;i++){
	a=b;b=t;
	t=a+b;
	printf("%d\n",t);
		
	}
	return 0;
}
