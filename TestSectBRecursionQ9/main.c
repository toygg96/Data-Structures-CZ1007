#include <stdio.h>
void rFindMaxAr(int *ar, int size, int *max);
int main() {
    int ar[50],i,max=0,size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (i=0; i < size; i++)
        scanf("%d", &ar[i]);
    rFindMaxAr(ar,size,&max);
    printf("rFindMaxAr(): %d\n", max);
    return 0;
}
void rFindMaxAr(int *ar, int size, int *max) {
    /* Write your code here */
    if(size == 0) return;
    else if (*ar > *max) {
            *max = *ar;
            rFindMaxAr(++ar,size-1,max);
    }
    else rFindMaxAr(++ar,size-1,max);
}
