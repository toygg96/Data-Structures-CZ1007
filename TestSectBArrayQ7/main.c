#include <stdio.h>
int platform1D(int ar[], int size);
int main(){
    int i,b[50],size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",&b[i]);
        printf("platform1D(): %d\n", platform1D(b,size));
    return 0;
}
int platform1D(int ar[], int size)
{
/* Write your program code here */
    int i, result = 0, temp,j;
    for (i = 0; i < size ; i++) {
        for (j = i+1; j < size ; j++) {
            if(ar[i]==ar[j]){
                result++;
                temp = ar[i];
            }
        }
    }
    if (result == 0)
        return 1;
    else
        return result;
}
