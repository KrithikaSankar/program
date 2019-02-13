#include <stdio.h>

int main(void) {
int f,l,sum=0;
long n;
scanf("%ld",&n);
l=n%10;
f=n;
while(n>=10)
{
	n=n/10;
}
f=n;

sum=f+l;

printf("%d",sum);

	return 0;
}
