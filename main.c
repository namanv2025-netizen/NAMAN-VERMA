#include <stdio.h>

int main()
{
    char operation = '\0';
    double num1 = 0;
    double num2 = 0;
    double result = 0;
    
    printf("Enter your first number : ");
    scanf("%lf", &num1);
    
    printf("Enter your operation (+,-,*,/) : ");
    scanf(" %c", &operation);
    
    printf("Enter your second number : ");
    scanf("%lf", &num2);
    
    switch(operation){
        case '+':
        result = num1 + num2;
        break;
        case '-':
        result = num1 - num2;
        break;
        case '*':
        result = num1 * num2;
        break;
        case '/':
        if(num2 == 0 ){
        printf("You can't divide by 0\n");
        } else{
            result = num1 / num2;
        }
        break;
        default:
            printf("Invalid operator\n");
    }
    
    printf("Result : %.2lf", result);

    return 0;
}