#include "Matrix_operation.h"
void readMatrix(int array[10][10], int rows, int colums);
void printMatrix(int array[10][10], int rows, int colums);
void matrixAdd(int arrayone[10][10], int arraytwo[10][10], int rows, int colums);
void matrixSub(int arrayone[10][10], int arraytwo[10][10], int rows, int colums);
void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columsA, int columsB);
int main(void){
    int i, j, k;
    int matrixA[10][10]; 
    int matrixB[10][10];
    int rowA, colA;
    int rowB, colB;
    int operation;
    char again = 'Y';
    while (again == 'Y'){
        printf("Operation Menu\n");
        printf("\t1. to Add\n");
        printf("\t2. to Subtract\n");
        printf("\t3. to Multiply two matrices\n");
        printf("Enter yout choice: ");
        scanf(" %d", &operation);
        switch (operation){
        case 1:
            printf("Enter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);
            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);
            if ((rowA != rowB) && (colA != colB)){
                printf("Invalid Matrices must be the same size\n");
            }

           else{
            printf("Enter elements of Matrix A a %d x %d matrix.\n", rowA, colA); 
            readMatrix(matrixA, rowA, colA);
            printf("Matrix A\n");
            printMatrix(matrixA, rowA, colA);
            printf("Enter elements of Matrix B a %d x %d matrix.\n", rowB, colB); 
            readMatrix(matrixB, rowB, colB);
            printf("tMatrix B\n");
            printMatrix(matrixB, rowB, colB);
            printf("The Sum of matrixA + matrixB is : \n");
            matrixAdd(matrixA, matrixB, rowA, colA);
           }
            break;
        case 2:
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);

           if ((rowA != rowB) && (colA != colB)){
                printf("\nInvalid Matrices must be the same size\n");
            }
            else{
            printf("Enter elements of Matrix A a %d x %d matrix.\n", rowA, colA); 
            readMatrix(matrixA, rowA, colA);
            printf("Matrix A\n\n");
            printMatrix(matrixA, rowA, colA);
            printf("Enter elements of Matrix B a %d x %d matrix.\n", rowB, colB); 
            readMatrix(matrixB, rowB, colB);
            printf("Matrix B\n\n");
            printMatrix(matrixB, rowB, colB);
            printf("The difference between matrixA - matrixB is : \n");
            matrixSub(matrixA, matrixB, rowA, colA);
            }
        case 3:
            printf("\nEnter the #rows and #cols for matrix A: ");
            scanf("%d%d", &rowA, &colA);

            printf("Enter the #rows and #cols for matrix B: ");
            scanf("%d%d", &rowB, &colB);
            if (colA != rowB)
            {
                printf("\nError! column of first matrix not equal to row of second.\n\n");
            }
            else{
            printf("Enter elements of Matrix A a %d x %d matrix.\n", rowA, colA);
            readMatrix(matrixA, rowA, colA);
            printf("Matrix A\n\n");
            printMatrix(matrixA, rowA, colA);
            printf("Enter elements of Matrix B a %d x %d matrix.\n", rowB, colB); 
            readMatrix(matrixB, rowB, colB);
            printf("Matrix A\n\n");
            printMatrix(matrixB, rowB, colB);
            matrixMultiply(matrixA, matrixB, rowA, colA, colB);
            }
            break;

        default:
            printf("\nIncorrect option! Please choose a number 1-4.");
            break;
        }

        printf("\nDo you want to calculate again? Y/N\n");
        scanf(" %c", &again);
        again = toupper(again);
    }
    return 0;
}
void readMatrix(int array[10][10], int rows, int colums){
    int i, j;
    for (i = 0; i < rows; i++){
        printf("\t%d entries for row %d: ", colums, i + 1);
        for (j = 0; j < colums; j++){
            scanf("%d", &array[i][j]);
        }
    }
    return;
}
void printMatrix(int array[10][10], int rows, int colums){
    int i, j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < colums; j++){
            printf("\t%d", array[i][j]);
        }
        printf("\n");
    }
}
void matrixAdd(int arrayone[10][10], int arraytwo[10][10], int rows, int colums){
    int i, j;
    int sumM[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
            sumM[i][j] = arrayone[i][j] + arraytwo[i][j];
            printf("\t%d", sumM[i][j]);
        }
        printf("\n");
    }
}
void matrixSub(int arrayone[10][10], int arraytwo[10][10], int rows, int colums)
{
    int i, j;
    int diff[10][10];
    for (i = 0; i < rows; i++){
        for (j = 0; j < colums; j++){
         diff[i][j] = arrayone[i][j] -arraytwo[i][j];
            printf("\t%d", diff[i][j]);
        }
        printf("\n");
    }
}
void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columsA,int columsB){
    int i, j, k;
    int mulM[10][10];
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
        {
            mulM[i][j] = 0;
        }

    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
            for (k = 0; k<columsA; ++k)
            {
                mulM[i][j] += arrayone[i][k] * arraytwo[k][j];
            }
    printf("\nOutput Matrix:\n");
    for (i = 0; i<rowsA; ++i)
        for (j = 0; j<columsB; ++j)
        {
            printf("\t%d ", mulM[i][j]);
            if (j == columsB - 1)
                printf("\n\n");
        }
}