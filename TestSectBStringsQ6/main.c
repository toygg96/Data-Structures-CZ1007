#include <stdio.h>
#include <string.h>
#define N 20
char *longestStrInAr(char str[N][40], int size, int *length);
int main()
{
    int i, size, length;
    char str[N][40], first[40], last[40], *p;
    char dummychar;
    printf("Enter array size: \n");
    scanf("%d", &size);
    scanf("%c", &dummychar);
    for (i=0; i<size; i++) {
        printf("Enter string %d: \n", i+1);
        gets(str[i]);
    }
    p = longestStrInAr(str, size, &length);
    printf("longest: %s \nlength: %d\n", p, length);
    return 0;
}
char *longestStrInAr(char str[N][40], int size, int *length)
{
/* Write your code here */
    int i, longStrIndex;
    *length = 0;  // init length to be 0 so even any 1 letter word can overwrite it.
    for(i = 0;i < size;i++) {
                if (*length <= strlen(str[i])){   // using strlen function to calculate the length of each string
                        *length = strlen(str[i]);  // if new str bigger than the current longest str, it will overwrite the current str
                        longStrIndex = i;
                }
                if (i == (size-1))  return str[longStrIndex]; // when it reaches the end of the array of string, return the longest length str
    }
    return str[0];
}
