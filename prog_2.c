#include<stdio.h>
/*Write a menu driven program with the following options:
* a. Addition
* b. Subtraction
* c. Multiplication
* d. Division
* e. Exit
*/
int main()
{
    char input;
    int n1, n2;
    printf("a. Addition \nb. Subtraction \nc. Multiplication \nd. Division \ne. Exit\n");
    
    printf("Enter above option for operation: ");
    scanf("%c", &input);
    switch(input)
    {
        case 'a':
            printf("Enter number1 and number2: ");
            scanf("%d %d", &n1, &n2);
            printf("Addition of both number is: %d \n", n1+n2);
            break;
        case 'b':
            printf("Enter number1 and number2: ");
            scanf("%d %d", &n1, &n2);
            printf("Subtraction of both number is: %d \n", n1-n2);
            break;
        case 'c':
            printf("Enter number1 and number2: ");
            scanf("%d %d", &n1, &n2);
            printf("Multiplication of both number is: %d \n", n1*n2);
            break;
        case 'd':
            printf("Enter number1 and number2: ");
            scanf("%d %d", &n1, &n2);
            printf("Division of both number is: %d \n", n1/n2);
            break;
        case 'e':
            printf("Exit\n");
            break;
    }
    
    return 0;
}
