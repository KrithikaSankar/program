#include <stdio.h>

int main(void) {
int low,high,i,flag;
scanf("%d\t %d\t",&low,&high);
while(low<high)
{
	flag=0;
	for(i=2;i<=low/2;++i)
	{
	 if(low%i==0)
	 {
	 	flag=1;
	 	break;
	 }}
	 if(flag==0)
	 printf("%d\t",low);
	 ++low;
}
	 
	
	return 0;
}
