#include <stdio.h>

int main(void) {
int s=1,n,r;
scanf("%d",&n);
while(n>0)
{

	r=n%10;
	s=s*r;
	n=n/10;
}
printf("%d",s);
	return 0;
	getch();
}
