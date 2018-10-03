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
    int size, size2 , result = 0,i,j;
    size = strlen(substr); size2 = strlen(str);
    for (i = 0;i < size;i++){
        for (j = 0;j < size2;j++){
            if(str[j] == substr[i]){bfbfbf
                if((substr[i+1] != str[j+1]) && ((i+1)!=size)) {
                    return 0;
                }
                result = 1;
                break;
            }
        }
    }
    return result;
}
