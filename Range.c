#include <stdio.h>

int main(void) {
int n,s=1,l=10;
scanf("%d",&n);
scanf("%d %d",&s,&l);
if((n-s)*(n-l)<=0)
{
	printf("yes");
}
else{
	printf("no");
}

	return 0;
}
