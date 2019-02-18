#include <stdio.h>

int main(void) {
int i,n,factor;
scanf("%d",&n);
for(i=1;i<n;i++)
{
	if(n%i==0)
	{
		factor=i;
	}
}
if(factor>1)
{
	printf("yes");
}
else
{
printf("no");
} 

	return 0;
}
