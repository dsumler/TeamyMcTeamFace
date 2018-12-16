#include <stdio.h>
#include "Multiply.c"
#include "Subtract.c"
#include "Divide.c"
#include "Add.c"

int main(void){
    float num1 = 0, num2 = 0;
    char choice;

    do {
        printf("--------------------------------------\n");
        printf("Welcome to our calculator.\n");
        printf("Developed by Teamy McTeamFace\n");
        printf("--------------------------------------\n");
        printf("Please select an option:\n");
        printf("1. (+) Add\n");
        printf("2. (-) Subtract\n");
        printf("3. (*) Multiply\n");
        printf("4. (/) Divide\n");
        printf("5. Quit\n");
        printf("--------------------------------------\n");
        printf("Enter your choice:\n");
        scanf("%c",&choice);
        switch (choice) {
            case '1':
                printf("--------------------------------------\n");
                printf("Enter the first number:\n");
                scanf("%f", &num1);
                printf("Enter the second number:\n");
                scanf("%f", &num2);
                printf("%.2f + %.2f\n", num1, num2);
                printf("The answer is: %.2f\n", add(num1, num2));
                while ( getchar() != '\n' );
                break;


            case '2':
                printf("--------------------------------------\n");
                printf("Enter the first number:\n");
                scanf("%f", &num1);
                printf("Enter the second number:\n");
                scanf("%f", &num2);
                printf("%.2f - %.2f\n", num1, num2);
                printf("The answer is: %.2f\n", subtract(num1, num2));
                while ( getchar() != '\n' );
                break;

            case '3':
                printf("--------------------------------------\n");
                printf("Enter the first number:\n");
                scanf("%f", &num1);
                printf("Enter the second number:\n");
                scanf("%f", &num2);
                printf("%.2f * %.2f\n", num1, num2);
                printf("The answer is: %.2f\n", multiply(num1, num2));
                while ( getchar() != '\n' );
                break;

            case '4':
                printf("--------------------------------------\n");
                printf("Enter the first number:\n");
                scanf("%f", &num1);
                printf("Enter the second number:\n");
                scanf("%f", &num2);
                printf("%.2f / %.2f\n", num1, num2);
                printf("The answer is: %.2f\n", divide(num1, num2));
                while ( getchar() != '\n' );
                break;

            case '5':
                printf("--------------------------------------\n");
                printf("Thank you for using our calculator.");
                break;

            default:
                printf("--------------------------------------\n");
                printf("ERROR: Choice not valid. Please try again.\n");
                while ( getchar() != '\n' );
                break;
        }
    }while(choice!='5');

    return 0;
}