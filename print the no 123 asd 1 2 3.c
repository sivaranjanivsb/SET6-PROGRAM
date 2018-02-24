#include <stdio.h>

int main(void) {
	int no,i,k=1,r,c=0,a[10];
	scanf("%d",&no);
	while(no!=0)
	{
	  r=no%10;
	  a[k]=r;
	  k++;
	  c++;
	  no=no/10;
	}
	for(i=c;i>=1;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
