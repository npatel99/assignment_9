#include<stdio.h>
/*Write a program which takes the month number as an input and display
number of days in that month
* input : 1,2,3,4,5,6,7,8,9,10,11,12
* output: 28 or 29, 30, 31 days
* 1. Jan  - 31 days
* 2. Feb  - 28 days in a common year and 29 days in leap years
* 3. Mar  - 31 days
* 4. Apr  - 30 days
* 5. May  - 31 days
* 6. June - 30 days
* 7. July - 31 days
* 8. Aug  - 31 days
* 9. Sept - 30 days
* 10. Oct - 31 days
* 11. Nov - 30 days
* 12. Dec - 31 days
*/
int main()
{
    int n;
    printf("Enter the number of month: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Number of Days in month is : 31 Days\n");
            break;
        case 2:
            printf("Number of Days in month is : 28 Days or 29 Days\n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Number of Days in month is : 30 Days\n");
            break;
        default:
            printf("you have entered invalid number of month\n");
    }
    return 0;
}
