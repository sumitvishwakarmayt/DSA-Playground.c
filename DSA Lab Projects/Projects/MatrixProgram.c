#include <stdio.h>

int main()
{
    printf("Program to Perform Addition, Subtraction, Multiplication, & Transpost of Matrix");
    // This section creates the Matrix.
    int row, column;
    printf("\nEnter the Number of Rows and Columns of the Matrix:");
    scanf("%d%d", &row, &column);
    int matrix_row[row] = {1, 2, 3, 4, 5};
    return 0;
}