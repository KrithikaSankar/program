#include <stdio.h>

int main(void) {
int n,k,i,p=1;
scanf("%d %d",&n,&k);
for(i=0;i<k;i++)
{
	p=p*n;
}
printf("%d",p);
	return 0;
}
