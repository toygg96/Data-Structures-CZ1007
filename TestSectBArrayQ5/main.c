#include <stdio.h>
#define SIZE 4
void computeTotal2D(int matrix[SIZE][SIZE]);
int main()
{
    int a[SIZE][SIZE];
    int i,j;
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<SIZE; i++)
        for (j=0; j<SIZE; j++)
        scanf("%d", &a[i][j]);
        printf("computeTotal2D(): \n");
        computeTotal2D(a);
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++)
        printf("%d ", a[i][j]);
        printf("\n");
}
    return 0;
}
void computeTotal2D(int matrix[SIZE][SIZE])
{
/* write your code here */
    int i, j;
    for (i = 0;i<SIZE;i++){
        for(j = 0;j<SIZE;j++){
            if (j == (SIZE - 1)) {
                matrix[i][j] = (matrix[i][0]) + (matrix[i][1]) + (matrix[i][2]);
            }

        }
    }

}
