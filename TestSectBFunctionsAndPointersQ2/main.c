#include <stdio.h>
float power1(float num, int p);
void power2(float num, int p, float *result);
int main()
{
    int power;
    float number, result=-1;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("power1(): %.2f\n", power1(number, power));
    power2(number,power,&result);
    printf("power2(): %.2f\n", result);
    return 0;
}
float power1(float num, int p)
{
/* Write your program code here */
    float result = num, n = 0;
    if (p == 0){
        return 1;
    } else if(p == 1) {
        return num;
    } else if (p < 0){
        p *= -1;
        while (p > 1){
            if(n == 0){
                result = num  *num;
                n++;
                p--;
            } else {
                result*=num;
                p--;
            }
        }
        result = 1.00 / result;
    } else {
        while (p > 1){
            if(n == 0){
                result = num*num;
                n++;
                p--;
            } else {
                result*=num;
                p--;
            }
        }
    }
    return result;
}
void power2(float num, int p, float *result)
{
/* Write your program code here */
    float n = 0;
    *result = num;
    if (p == 0){
        *result =  1;
    } else if(p == 1) {
        *result = num;
    } else if (p < 0){
        p *= -1;
        while (p > 1){
            if(n == 0){
                *result = num  *num;
                n++;
                p--;
            } else {
                *result*=num;
                p--;
            }
        }
        *result = 1.00 / *result;
   } else {
        while (p > 1){
            if(n == 0){
                *result = num*num;
                n++;
                p--;
            } else {
                *result*=num;
                p--;
            }
        }
    }

}
