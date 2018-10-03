#include <stdio.h>
int countWords(char *s);
int main()
{
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
/* Write your code here */
    int i, wordCount = 1;
    for(i = 0;i< strlen(s);i++){
        if(s[i] == ' '){
            wordCount++;
        }
    }
    return wordCount;
}
