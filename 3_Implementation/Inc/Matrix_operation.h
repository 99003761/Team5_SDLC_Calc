/** 
* @file Matrix_operation.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __MATRIX_OPERATION_H__
#define __MATRIX_OPERATION_H__

#include <stdio.h>
#include <stdlib.h>
void readMatrix(int array[10][10], int rows, int colums);
void printMatrix(int array[10][10], int rows, int colums);
void matrixAdd(int arrayone[10][10], int arraytwo[10][10], int rows, int colums);
void matrixSub(int arrayone[10][10], int arraytwo[10][10], int rows, int colums);
void matrixMultiply(int arrayone[10][10], int arraytwo[10][10], int rowsA, int columsA, int columsB);

#endif

