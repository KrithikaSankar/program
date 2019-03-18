#include <stdio.h>

int main(void) {
int n,k,c=0;
scanf("%d %d",&n,&k);
while(n>=k)
{
	n=n-k;
	c++;
}
printf("%d",c);

	return 0;
}
