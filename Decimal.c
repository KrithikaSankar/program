#include <stdio.h>

int main(void) {
int a[200],i,j,n;
scanf("%d", &n);
scanf("%d",&a[i]);
for(i=0;n>0;i++)
{
	a[i]=n%2;
	n=n/2; 
}
for(j=i-1;j>=0;j--)
{
	printf("%d",a[j]);
} 

	return 0;
}
