#include <stdio.h>
#include <stdbool.h>

int main (){
   
   float price = 10.00;
   bool isStudent = false;
   bool isSenior = false;
   
   if(isStudent && isSenior) {
        printf("You get a discount of 30%\n");
        price *= 0.7;
   }
   
   else if(isSenior){
       printf("You get a discount of 20%\n");
       price *= 0.8;
   }
   else if (isStudent){
       printf("You get a discount of 10%\n");
       price *= 0.9;
   }
   
   printf("Price of ticket is $%.2f\n", price);
   
    return 0;
}