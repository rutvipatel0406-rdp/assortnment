#include<stdio.h>

int main() 
{
    float num1, num2, result;
    int choice;
    char ch;

    do {
        printf("press 1 for  Addition\n");
        printf(" press 2 for Subtraction\n");
        printf("press 3 for Multiplication\n");
        printf("press 4 for Division\n");
        printf("press 0 for Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {

        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result =(num1+num2);
            printf("Result = %.2f\n", result);
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result =(num1-num2);
            printf("Result = %.2f\n", result);
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result = (num1*num2);
            printf("Result = %.2f\n", result);
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &num1, &num2);
            result =(num1/num2);
            printf("Result = %.2f\n", result);
            break;

        case 5:
            printf("Program Terminated.\n");
            return 0;

        default:
            printf("Invalid Choice!\n");
        }

        printf("\nPress E to Exit or any other key to Continue: ");
        scanf(" %c", &ch);

    } while(ch != 'E' && ch != 'e');

    printf("Thank You!\n");

    return 0;
}