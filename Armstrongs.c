#include<stdio.h>
#include<math.h> 
int main(void) 
{ 
int n, sum = 0, rem = 0, cube = 0, temp; 
char Yes, No; 
printf("%d", n); //KRITHIKA
scanf("%d", &n); 
temp = n; 
while(n != 0) 
{ 
   rem = n % 10; 
   cube = pow(rem, 3); 
   sum = sum + cube; 
   n = n / 10; 
   } 
 if(sum == temp) 
    printf("%s", Yes); 
   else 
    printf("%s", No); 
 }
  




   
   

      
      
         
        
        
   
   
      
   

   
   
   











   
   
   




       
        
        

