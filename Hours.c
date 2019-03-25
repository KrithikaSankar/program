#include <stdio.h>

int main(void) {
int m,h;
scanf("%d",&m);
if(m>=60)
{
	h=m/60;
	m=m%60;
	printf("%d %d",h,m);
}
else
{
	printf("0 %d",m);
} 
	return 0;
}
