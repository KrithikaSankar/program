#include <stdio.h>

int main(void) {
int i,n,s=0,m;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&m);
	s=s+m;
}
printf("%d",s);
	return 0;
}
