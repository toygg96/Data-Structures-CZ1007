#include <stdio.h>
#define SIZE 10
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize);
int main()
{
    int ar[SIZE][SIZE], rowSize, colSize;
    int i,j,min;
    printf("Enter row size of the 2D array: \n");
    scanf("%d", &rowSize);
    printf("Enter column size of the 2D array: \n");
    scanf("%d", &colSize);
    printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &ar[i][j]);
    min=minOfMax2D(ar, rowSize, colSize);
    printf("minOfMax2D(): %d\n", min);
return 0;
}
int minOfMax2D(int ar[][SIZE], int rowSize, int colSize)
{
/* Write your program code here */
    int i, j, min,max = 1,results;
    for (i=0; i<rowSize; i++) {
        for (j=0; j<colSize; j++) {
            if (ar[i][j] > max) {
                max = ar[i][j];
            }
        }
        min = max;
        if (min < results) {
            results = min;
        }
    }
    return results;
}
