#include <stdio.h>
#include <string.h>
int main(void) {
char a[200];
int i,c=0,c1=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]=='(')
	{
		c=c+1;
	}
	else if(a[i]==')')
	{
		c1=c1+1;
	}
}
if(c==c1)
{
	printf("yes");
}
else
{
	printf("no");
}


	return 0;
}
