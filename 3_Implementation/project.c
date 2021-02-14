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
    printf("\n1.matrix operation \n2. trigno \n3. Exit");
    printf("\n\tEnter your choice\n");
    scanf("%d", &calculator_operation);

    if(3 == calculator_operation)
    {
        printf("\nThank you. Exiting the Application\n");
        exit(0);
    }

        switch(calculator_operation)
    {
        case 1:
            printf("\n\t%d + %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            add(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        case SUBTRACT:
            printf("\n\t%d - %d = %d\nEnter to continue", 
            calculator_operand1, 
            calculator_operand2,
            subtract(calculator_operand1, calculator_operand2));
            
            // __fpurge(stdin);
            getchar();
            break;
        
        case 3:
            exit(0);
            break;
    }
}

