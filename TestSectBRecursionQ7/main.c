#include<stdio.h>
int rStrLen (char *s);
int main ()
{
    char str[80];
    printf ("Enter the string: \n");
    gets (str);
    printf ("rStrLen(): %d\n", rStrLen (str));
    return 0;
}

int rStrLen (char *s)
{
    /* Write your program code here */
    printf("%s\n",s);
    if(*s==NULL)
    {
        return 0;
    }
    if(*s==' ')
        return rStrLen(++s);
    return 1 + rStrLen(++s);
}
