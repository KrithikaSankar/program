#include <stdio.h>

int main(void) {
int a[200],n,i,small,position;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
small=a[0]; 
for(i=0;i<n;i++)
{
	if(small>a[i])
	{
		small=a[i];
		position=i;
	}}
	printf("%d",small);
	return 0;
}
