#include <stdio.h>

int main(void) {
	int a[10],i,n,b;
    scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	b=a[0];
	for(i=0;i<n;i++)
	{if(a[i]>b)
	b=a[i];}
	printf("%d",b);
	return 0;
}
