#include <stdio.h>

int main(void) {
int a[100],i,j,n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d\t",&a[i]);
}
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(a[j]>a[i])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}}}

		if(a[i]==0)
		{
			printf("yes");
		}
		else
		{
			printf("No");
		}

	return 0;
}
