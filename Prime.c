#include<stdio.h>
int main() 
{ 
int n,i,Yes,No; 
printf("%d",n); 
scanf("%d",&n); 
for(i=2;i<=n/2;++i) 
if(n%i==0) 
{ 
break; 
} 
if(i>n/2){ 
printf("%d", Yes); 
else 
printf("%d", No); 
  return 0;
}}








