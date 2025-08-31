#include <stdio.h>
#include <string.h>

int main()
{
    int age = 0;
    char name[20] = "";
    long long id = 0;
    char addre[50] = "";
    char dob[30] = "";
    char type[4] = "";
    
    printf("Enter your age : ");
    scanf("%d", &age);
    getchar();
    
    if (age >= 18)
    {
        printf("Redirecting.....\n");
        
        printf("PAN CARD APPLICATION\n");
        
        printf("Enter your name : ");
        fgets(name, sizeof(name), stdin);
        
        printf("Enter your AADHAR CARD ID : ");
        scanf("%lld", &id);
        getchar();
        
        printf("Enter your permanent address : ");
        fgets(addre ,sizeof(addre), stdin);
        
        printf("Enter your DOB : ");
        scanf("%s", dob);
        
        
        printf("      YOUR DETAILS     \n");
        printf("Name      : %s\n", name);
        printf("DOB       : %s\n", dob);
        printf("Aadhar ID : %lld\n", id);
        printf("Address   : %s\n", addre);
        
        printf("Is this correct ? [Y/N] \n");
        scanf("%s", type);
        
        if (strcmp(type, "Y") == 0 || strcmp(type, "y") == 0)
        {
            printf("Thank you for applying!");
        }else{
            printf("Please restart the process!");
        }
        
    } else {
        printf("Acces denied. You are underage! \n");
    }
        
        
    return 0;
}