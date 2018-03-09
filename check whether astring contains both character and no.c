#include <stdio.h>
#include<string.h>
int main(void) {
	char a[10];
	int i,d=0,c=0;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
	if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>='A')&&(a[i]<='Z')))
	c++;
            if((a[i]>='0')&&(a[i]<='9'))
            d++;
             }
             if((d>0)&&(c>0))
             printf("yes");
             else
             printf("no");
	return 0;
}
