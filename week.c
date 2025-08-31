#include <stdio.h>

int main(){

char day = '\0';

    printf("Enter the day of a week (M , T , W , H , F , S , U) : ");
    scanf("%c", &day);

switch(day){
	case 'M':
	    printf("It is Monday");
	    break;
	
	case 'T':	
	    printf("It is Tuesday");
	    break;

	case 'W':
	    printf("It is Wednesday");
	    break;

	case 'H':
	    printf("It is Thursday");
	    break;

	case 'F':
	    printf("It is Friday");
	    break;

	case 'S':
	    printf("It is Saturday");
	    break;

	case 'U':
	    printf("It is Sunday");
	    break;
	    
	default:
	    printf("Only use (M , T , W , H , F , S , U)");
	    break;
	    
}

return 0;
}
