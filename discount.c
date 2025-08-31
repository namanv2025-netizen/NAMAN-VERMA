#include <stdio.h>
#include <stdbool.h>

int main (){
   
   float price = 10.00;
   bool isStudent = true;
   bool isSenior = false;
   
   if(isStudent) {
       printf("You get a discount of 10%\n");
       price *= 0.9;
   }
   
   if(isSenior) {
       printf("You get a discount of 20%\n");
       price *= 0.8;
   }
   
   printf("Price of ticket is $%.2f\n", price);
   
    return 0;
}