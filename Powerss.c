#include <stdio.h>

int main(void) {
int num;
scanf("%d",&num);
if((num!=0)&&((num&(num-1))==0))
{
printf("yes");}
else{
printf("no");}
	return 0;
}




















