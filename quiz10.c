#include<stdio.h>
void rReverseAr (int ar[], int size);
int main ()
{
    int array[80];
    int size, i;
    printf ("Enter size: \n");
    scanf ("%d", &size);
    printf ("Enter %d numbers: \n", size);
    for (i = 0; i < size; i++)
        scanf ("%d", &array[i]);
    printf ("rReverseAr(): ");
    rReverseAr (array, size);
    for (i = 0; i < size; i++)
        printf ("%d ", array[i]);
    printf ("\n");
    return 0;
}

void rReverseAr (int ar[], int size)
{
    /* Write your program code here */
    int temp;
    temp = ar[size-1];
    printf("\ntemp-%d / pointer-%d\n",temp,*ar);
    ar[size-1]=*ar;
    *ar=temp;
    int i;
    for(i=0; i<5; i++)
    {
        printf("ar[%d]-%d\n",i,ar[i]);
    }
    if(size>=1)
        rReverseAr((ar+1),(size-2));
}

