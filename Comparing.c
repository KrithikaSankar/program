#include <stdio.h>

int main(void) {
int i;
char str1[200],str2[200];
scanf("%s\t  %s\t",str1,str2);
i=0;
while(str1[i]==str2[i]&&str1[i]!='\0')
{ 
	i++;
}
if(str1[i]==str2[i])
{
	printf("yes");
}
else
{
	printf("no");
} 
	return 0;
}
