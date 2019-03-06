#include <stdio.h>

int main(void) {
char s[100],stack[100];
int len,i,top=-1;
scanf("%s",s);
len=strlen(s);
for(i=0;i<len;i++)
{
	top++;
	stack[top]=s[i];
}
for(i=0;i<len;i++)
{
	if(stack[top]!=s[i])
	break;
	top--;
}
if(i==len)
{
	printf("YES");
}
else
{
	printf("NO");
}
	return 0;
}
