#include<stdio.h>
int main()
{
    int number;
    printf("\nPlease enter day_no :  ");
    scanf("%d" , &number);

    switch(number)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
e
        case 6:
        printf("Saturday");
        break;

        case 7:
        printf("Sunday");
        break;

        default:
        printf("Aukat mai reh ");
    }
    return 0;
}