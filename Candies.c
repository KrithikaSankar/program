#include <stdio.h>

int main(void) {
int n,a[200],i,b[200],c=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
	b[i]=1;
}
for(i=1;i<n;i++)
{
	if(a[i]>a[i-1])
		b[i]=b[i-1]+1;
	}
	for(i=0;i<n;i++)
	
		c=c+b[i];
		printf("%d",c);
	

	return 0;
}
