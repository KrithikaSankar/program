#include <stdio.h>

int main(void) {
int i,n1,n2,m;
scanf("%d %d",&n1,&n2);
for(i=1;i<=n1&&i<=n2;++i)
{
	if(n1%i==0&&n2%i==0)
	{
		m=i;
	}
}
printf("%d",m); 
	return 0;
}
