#include <stdio.h>

int main(void) {
int a[50],i,j,n,temp;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d\t",&a[i]);
}
for(i=0;i<n;i++) {
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}}}
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	return 0;
}
