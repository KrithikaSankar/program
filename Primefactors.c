#include <stdio.h>

int main(void) {
int i,j,n,fact;
scanf("%d",&n);
for(i=2;i<=n;i++)
{
	if(n%i==0)
	{
		fact=1;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				fact=0;
				break;
			}}
			if(fact==1)
			{
				printf("%d\t",i);
			} }}
	return 0;
}
