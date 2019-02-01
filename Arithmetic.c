#include <stdio.h> 
#include <math.h> 
int main(void) 
  { 
int a, d, n, i, tn; 
int sum = 0; 
printf("%d", a); 
scanf("%d", &a); 
printf("%d", n); 
scanf("%d", &n); 
printf("%d", d); 
scanf("%d", &d); 
sum = (n * (2 * a + (n - 1) * d))/ 2; 
tn = a + (n - 1) * d); 
for(i = a; i <= tn; i = i + d) 
{ 
if(i != tn) 
printf("%d +", i); 
  else 
printf("%d +", i, sum); 
  } 
return 0 
  }












