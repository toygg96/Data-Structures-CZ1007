#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[])
{
/* Write your program code here */
    int i, j, l1 = 0, l2 = 0, count = 0, count1 = 0;
    while(str[l1] != '\0')    // alternative implementation of strlen()
        l1++;
    while(substr[l2] != '\0') // alternative implementation of strlen()
        l2++;
    for (i = 0; i < l1;) {
        j = 0;
        count=0;
        while ((str[i] == substr[j]) && (i != l1)) {  // compare each char of string and substring
            count++;
            i++;
            j++;
        }
        if (count == l2) {  // increment substring found counter if the same chars -
            count1++;                // found are of the same length of substr
            count = 0;          // reset counter back to 0
        }
        else                // if char doesnt match
           i++;
    }
    return count1;
}
