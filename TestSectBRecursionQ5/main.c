#include<stdio.h>
int rAllOddDigits1 (int num);
int main ()
{
    int number;
    printf ("Enter a number: \n");
    scanf ("%d", &number);
    printf ("rAllOddDigits1(): %d\n", rAllOddDigits1 (number));
    return 0;
}

int rAllOddDigits1 (int num)
{
    /* Write your code here */
    if(num%2==1)
        return 1;
    if(num%2==0)
    {
        if(num>9)
            rAllOddDigits1(num/10);
        return 0;
    }

}
