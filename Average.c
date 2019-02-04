
#include <stdio.h>

int main(void) {
int n,count=1;
float x,average,sum=0;
scanf("%d",&n);
scanf("%f",&x);
while(count<n)
{
	sum+=x;
	++count;
}
average=sum/n;
printf("%f",average); 
	return 0;
}









	





















