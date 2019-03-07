#include <stdio.h>

int main(void) {
int n,k,i,j,a[100],flag=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=i+1;j<n;j++)
	{
		if(a[i]+a[j]==k)
		{
			printf("yes");
			flag=1;
			break;
		}}}
		if(flag!=1)
		{
			printf("no");
		}
	return 0;
}
