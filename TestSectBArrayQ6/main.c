#include <stdio.h>
void specialNumbers1D(int ar[], int number, int *size);
int main()
{
    int a[20],i,size=0,num;
    printf("Enter a number (between 100 and 999): \n");
    scanf("%d", &num);
    specialNumbers1D(a, num, &size);
    printf("specialNumbers1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",a[i]);
    return 0;
}
void specialNumbers1D(int ar[], int number, int *size)
{
/* Write your code here */
    int count=0, index = 0,buf = 0, temp = 0,temp2 =0 , temp3 = 0;
    int temReg = number;
    do {
        temp = number % 10; number /= 10;
        temp2 = number % 10; number /= 10;
        temp3 = number % 10;
        buf = (temp * temp * temp) + (temp2 * temp2 * temp2) + (temp3 * temp3 * temp3);
        if (buf == (temReg - index)){
            ar[count] = buf;
            printf("Found a special Number: %d. Stored into index i %d \n", ar[count],count);
            count++;
            *size = count;
        }
        index++;
        temp=0;
        temp2=0;
        temp3=0;
        buf=0;
        number = (temReg) - index;
    } while (number > 100);
}
