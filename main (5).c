#include <stdio.h>

int main()
{
    int choice;
    float celsius = 0.0f;
    float fahrenheit = 0.0f;
    
    printf("Temprature Convertor\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Which one : ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("Celsius : ");
            scanf("%f", &celsius);
                fahrenheit = (celsius * 9.0 / 5.0) + 32;
        printf("%.2f Celsius is %.2f Fahrenheit", celsius , fahrenheit);
    }
    else if (choice ==2) {
         printf("Fahrenheit : ");
            scanf("%f", &fahrenheit);
                celsius = (fahrenheit - 32) * 5.0 / 9.0;;
        printf("%.2f Fahrenheit is %.2f Celsius", fahrenheit , celsius);  
        }
    else {
        printf("Invalid Operation");
    }

    return 0;
}