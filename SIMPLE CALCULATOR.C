#include <stdio.h>


int main()
{
    double a,b,ans ;
    char operation;
    
    printf("        SIMPLE CALCULATOR\n");
    
    printf("Enter your first number : ");
    scanf("%lf", &a);
    
    printf("Enter your second number : ");
    scanf("%lf", &b);
    
    printf("What should we do ? (+,-,*,/) : ");
    scanf(" %c", &operation);
    
    if (operation == '+') {
        ans = a + b;
        
        printf("Answer : %.2lf\n", ans);

    } else if (operation == '-') {
        ans = a - b;
        
        printf("Answer : %.2lf\n", ans);
    
        
    } else if (operation == '*') {
        ans = a * b;
        
        printf("Answer = %.2lf\n",ans);

    }  else if (operation = '/') {
        
        if (b == 0) {
            printf("Can't devide by 0");
        }
        else {
              ans = a / b;
         printf("Answer : %.2lf\n", ans);   
        }
        
    }
    
        
    
    return 0;
}