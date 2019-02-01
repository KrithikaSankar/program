#include<stdio.h> 
int main(void) 
{ 
int i, fact = 1, n; 
printf("%d", n); //KRITHIKA
scanf("%d", &n); 
if(n <= 0) 
fact = 1; 
else 
{ 
for(i = 1; i <= n; i++) 
{ 
fact = fact * i; 
} 
} 
printf("%d", fact); 
} 
