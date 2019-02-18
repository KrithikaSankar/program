#include <stdio.h>

int main(void) {
int l,r,n,t,c=1;
scanf("%d %d",&l,&r);
n=l*r;
t=n;
while(t>0)
{
	t=t-c;
	c=c+2;
}
if(t==0)
{
printf("yes");
}
else
{
	printf("no");
}


	return 0;
}
