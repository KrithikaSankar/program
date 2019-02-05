#include <stdio.h>

int main(void) {
int num[30];
int i,j,a,n;
scanf("%d\t",&n);
for(i=0;i<=n;++i)
{
	scanf("%d\t",&num[i]);
}
for(i=0;i<n;++i)
{
	for(j=i+1;j<n;++j)
{
	if(num[i]<num[j])
	{
		a=num[i];
		num[i]=num[j];
		num[j]=a;
	}}}
	for(i=0;i<n;++i)
	{
		printf("%d\t",num[i]);
	}

	return 0;
}
