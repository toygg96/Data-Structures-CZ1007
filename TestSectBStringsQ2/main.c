#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
    char a[80],b[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    printf("compareStr(): %d\n", compareStr(a,b));
    return 0;
}
int compareStr(char *s, char *t)
{
/* Write your code here */
    int i = 0, diff = 0; // init i and diff to be 0
    while (s[i] != '\0' || t[i] != '\0'){   // keep comparing if the character is not a terminator string (\0)
        if((s[i] < t[i]) || (s[i] > t[i])) {   // if s < t or s>t
                diff = s[i] - t[i];
                break;
            }
            i++;    // increment i
    }
    return diff;
}
