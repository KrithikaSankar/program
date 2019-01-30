#include<stdio.h>

int main(void){
int r,n,sum=0;
printf("enter the value of n");//krithika
scanf("%d",&n);
while(n>10)
{
r=n%10;
sum=sum+r;
n=n/10;
printf("%d",sum);
}
return 0;
}



 






