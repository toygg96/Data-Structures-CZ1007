#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50];
    int totVowels, totDigits;
    printf("Enter the string: \n");
    gets(str);
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
/* Write your program code here */
    int i; *totDigits = 0; *totVowels = 0;
    char bigDigit[1] = "9", smallDigit[1] = "0";  // create ASCII value of the 2 digits
    for(i = 0;i < strlen(str);i++){
        if ((str[i] == 'a') || (str[i] == 'e') || (str[i] == 'i') || (str[i] == 'o') || (str[i] == 'u')) {   // note use single inverted commas to cmp char
            (*totVowels)++;
        } else if ((str[i] == 'A') || (str[i] == 'E') || (str[i] == 'I') || (str[i] == 'O') || (str[i] == 'U')) {
            (*totVowels)++;
        } else if ((str[i] <= bigDigit[0]) && (str[i] >= smallDigit[0])){  // comparing ASCII code for int and char. C compiler cannot cmp directly
            (*totDigits)++;
        }
    }
}
