#include <stdio.h>

int main(void) {
int b,e,r=1;
scanf("%d %d",&b,&e);
int i=1;
while(i<=e)
{
	r*=b; 
	i++;
}
printf("%d",r);
	return 0;
}
