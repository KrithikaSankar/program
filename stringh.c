#include <stdio.h>
#include <string.h>
int main(void) {
char a[200],b[200];
int n,m,i,e;
scanf("%s %s",a,b);
n=strlen(a);
m=strlen(b);
if(n==m)
{
	for(i=0;i<n;i++)
	{
		e=a[i]+b[i];
		{
         e=e-96;
			if(e<123)
			{
				char s=e;
				printf("%c",s)	;
			}
			else
			{
				char s=e-26;
				printf("%c",s);
			}}}}
			
				
			
	return 0;
}
