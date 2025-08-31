#include <stdio.h>


int main()
{
    int a = 0;
    
    printf("        DIVISIBLE BY 5 or 11\n");
    
    printf("Enter your number : ");
    scanf("%d", &a);
    
    if (a%5 == 0 && a%11 == 0) {
        printf ("%d is divisible by both 5 and 11", a);
    } else if (a%5 == 0 ) {
        printf("%d is only divisible by 5", a );
    } else if (a%11 == 0 ) {
        printf("%d is only divisible by 11", a);
    }   else {
        printf("%d is not divisible by 5 or 11", a);
    }
   
    
    
    
    
    return 0;
}
