#include "trigno.h"
#include "Matrix_operation.h"

unsigned int calculator_operation = 0;

int main(int argc, char *argv[])
{
    printf("\n****Calculator****\n");
    while(1)
    {
        calculator_menu();
    }
}

void calculator_menu(void)
{
    printf("\nAvailable Operations\n");
    printf("\n1.\basic operation\n2.matrix operation \n3. trigonometric operations\n4.Conversion \n3. ");
    printf("\n\tEnter your choice\n");
    scanf("%d", &calculator_operation);
        switch(calculator_operation)
    {
        case 1:
            Basic_operations();
            break;
        case 2:
            Matrix_operations();
            break;
        case 3:
            Trigonometric_operation();
            break;
        case 4:
              Conversion();
            break;
        default:
            printf("\nIncorrect option! Please choose a number 1-4.");
            break;
    }
}

