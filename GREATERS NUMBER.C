#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    
    printf("Enter your 1st number : ");
    scanf("%d", &num1);
    
    printf("Enter your 2nd number : ");
    scanf("%d", &num2);
    
    printf("Enter your  number : ");
    scanf("%d", &num3);
    
    if(num1 > num2 &&   
    num1 > num3){
        printf("Your first digit was greater which was %d\n", num1);
    } else if  (num2 > num1 && num2 > num3){
        printf("Your second digit was greater which was %d\n",num2);
    } else {
        printf("Your third digit was the greates which was %d\n",num3);
    }
    
    
    
    return 0;
}