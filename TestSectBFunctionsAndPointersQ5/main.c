#include <stdio.h>
int perfectProd1(int num);
void perfectProd2(int num, int *prod);
int main()
{
    int number, result=0;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("perfectProd1(): %d\n", perfectProd1(number));
    perfectProd2(number, &result);
    printf("perfectProd2(): %d\n", result);
    return 0;
}
int perfectProd1(int num)
{
    /* Write your code here */
    int n = 1, result = 0,perfectProdNum = 1;
    num-=1;
    while(num!=0)
    {
        while (num != n)
        {
            if (num % n == 0)
                result+=n;
            n++;

        }
        //printf("\nNum: %d and result: %d\n",num,result);
        if (result == num)
            perfectProdNum *= result;
        num--;
        result = 0;
        n = 1;
    }
    return perfectProdNum;
}
void perfectProd2(int num, int *prod)
{
    /* Write your code here */
    int n = 1, result = 0;
    num-=1;
    *prod = 1;
    while(num!=0)
    {
        while (num != n)
        {
            if (num % n == 0)
                result+=n;
            n++;
        }
        //printf("Num: %d and result: %d\n",num,result);
        if (result == num)
            *prod *= result;
        num--;
        result = 0;
        n = 1;
    }
}
