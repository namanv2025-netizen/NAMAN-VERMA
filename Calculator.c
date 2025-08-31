#include <stdio.h>

int main()
{
    int choice = 0;
    float inr;
    float usd;
    
    printf("Money Conversion Calculator\n");
    printf("1. INR TO USD\n");
    printf("2. USD TO INR\n");
    printf("What do you want ? 1 or 2 : ");
    scanf("%d", &choice);
    
    if (choice == 1){
        printf("How much INR : ");
            scanf("%f", &inr);
                usd = inr / 87.56;
        printf("%.2f INR is equal to %.2f USD", inr , usd);
        
    }
    else if (choice == 2){
         printf("How much USD : ");
             scanf("%f", &usd);
                     inr = usd * 87.56;
        printf("%.2f USD is equal to %.2f INR",usd , inr);
    }
    else{
        printf("Invalid Operation!");
    }
    return 0;
}