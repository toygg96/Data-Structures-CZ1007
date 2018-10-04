#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main() {
    char a[80],b[80];
    char c[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    mergeStr(a,b,c);
    printf("mergeStr(): ");
    puts(c);
    return 0;
}
void mergeStr(char *a, char *b, char *c)
{
/* Write your code here */
     int i=0;
     char temp;
     *c = '\0';
     strcat(c, a);
     strcat(c, b);
     while(c[i] != '\0')
     {
         if(c[i] > c[i+1] && c[i+1] != '\0')
         {
             temp = c[i];
             c[i] = c[i+1];
             c[i+1] = temp;
             i = 0;
         }
         i++;
     }
}

