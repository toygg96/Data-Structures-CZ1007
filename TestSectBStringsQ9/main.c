#include <stdio.h>
#define INIT_VALUE -1
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40];
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
/* Write your code here */
    int i,k;
    k=0;
    i=0;
    while(str[i]!='\0')
    {
        while(str[i+k]==substr[k])
        {
            if(substr[k+1]=='\0')
            {
                return 1;
                break;
            }
            k++;
        }
        i++;
        k=0;
    }
    return 0;
}
