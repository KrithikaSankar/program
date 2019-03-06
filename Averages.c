#include <stdio.h>

int main(void) {
int n,i,c=0,c1=0,a[10];
int k,d,u,l,p,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
k=n/2;
for(i=0;i<k;i++)
{
	sum=sum+a[i];
	c++;
}
d=sum;
sum=0;
for(i=k;i<n;i++)
{
	sum=sum+a[i];
	c1++;
}
u=sum;
l=d/c;
p=u/c1;
if(l==p)
{
	printf("yes");
}
else
{
	printf("no");
}

	return 0;
}
