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
    int i,k,count;
    i=0;
    k=0;
    count=0;
    while(str[i]!='\0')
    {
        while(str[i+k]==substr[k] && substr[k]!='\0')
        {
            if(substr[k+1]=='\0')
                count++;
            k++;
        }
        i++;
        k=0;
    }
    return count;
}
