#include <stdio.h>

int main(void) {
int n,i,j,x=0,c=0,a[200];
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
	x=n*i;
    for(j=1;j<=n;j++)
    {
    	if(x==a[j])
    	{
    		c++;
    	}}}
		printf("%d",c);
	
	return 0;
}
