//#include<stdio.h>
//void rReverseDigits (int num, int *result);
//int
//main ()
//{
//    int result = 0, number;
//    printf ("Enter a number: \n");
//    scanf ("%d", &number);
//    rReverseDigits (number, &result);
//    printf ("rReverseDigits(): %d\n", result);
//    return 0;
//}
//
//void rReverseDigits (int num, int *result)
//{
//    /* Write your code here */
//    int base;
//    base = 1;
//    while (num/(base*10)) //calculate base until while(0)
//    {
//        base *= 10;
//    }
//
//    if(num<=9)
//    {
//        *result=num;
//    }
//    else if(num>=10)
//    {
//        rReverseDigits(num/10, result);
//        *result += (num%10) * base;
//    }
//}
//
