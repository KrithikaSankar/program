#include <stdio.h>

int main(void) {
int x,y,t;
scanf("%d\t %d\t",&x,&y);
t=x;
x=y;
y=t;
printf("%d %d",x,y);
	return 0;
}
