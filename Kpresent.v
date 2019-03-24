#include <stdio.h>

int main(void) {
int n,k,i,a[100],flag=0;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
if(a[i]==k)
flag=1;
}
if(flag==1)
{
	printf("Yes");
}
else {
	printf("No");
}
	return 0;
}
