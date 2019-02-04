
#include <stdio.h>

int main(void) {
int t,n,reverse=0;
t=n;
scanf("%d",&n);
while(t!=0)
{
	reverse=reverse*10;
	reverse=reverse+t%10;
	t=t/10;
	}
if(n==reverse)
printf("yes");
else
printf("No");
	return 0;
}
