#include <stdio.h>

int main(void) {
int i,s,a[200];
for(i=0;i<10;i++)
scanf("%d\t",&a[i]);
s=a[0]; 
for(i=0;i<10;i++)
{
	if(a[i]<s)
	s=a[i];
}
printf("%d",s); 
	
	
	return 0;
}
