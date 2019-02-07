#include <stdio.h>

int main(void) {
int i,length=0;
char string[200];
scanf("%s",string);
for(i=0;string[i]!='\0';i++)
{
	length++;
}
printf("%d",length); 
	return 0;
}
