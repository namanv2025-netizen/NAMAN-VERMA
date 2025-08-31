#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    
    if(num1 > num2){
        printf("Your first digit was greater which was %d\n", num1);
    } else {
        printf("Your second digit was greater which was %d\n",num2);
    }
    
    
    
    return 0;
}