#include <stdio.h>

int main(void) {
int t,d,n,reverse=0;
scanf("%d",&n);
t=n;
while(t!=0)
{
	d=t%10;
	reverse=reverse*10+d;
	t=t/10;
	}
if(n==reverse)
printf("yes");
else
printf("No");
	return 0;
}
