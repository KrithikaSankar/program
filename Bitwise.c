#include <stdio.h>

int main(void) {
int num1,num2;
scanf("%d\t %d",&num1,&num2);
num1^=num2;
num2^=num1;
num1^=num2;
printf("%d %d",num1,num2);
	return 0;
}
