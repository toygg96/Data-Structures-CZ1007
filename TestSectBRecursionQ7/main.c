#include <stdio.h>
int rStrLen(char *s);
int main() {
    char str[80];
    printf("Enter the string: \n");
    gets(str);
    printf("rStrLen(): %d\n", rStrLen(str));
    return 0;
}
int rStrLen(char *s) {
    int c=0;
    if(s[c]=='\0')
        return 0;
    if(s[c]!='\0')
    {
        c++;
        return rStrLen(++s)+1;
    }
}
