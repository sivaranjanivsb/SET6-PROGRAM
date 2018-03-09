#include <stdio.h>

int main(void) {
	int no1,no2;
	scanf("%d %d",&no1,&no2);
	no1=no1^no2;
	no2=no1^no2;
	no1=no1^no2;
	printf("%d %d",no1,no2);
	return 0;
}
