#include <stdio.h>
typedef struct {
char source;
char code;
} Rule;
void encodeChar(Rule table[5], char *s, char *t);
int main()

{
    char s[80],t[80];
    Rule table[5] = {'a','d', 'b','z', 'z','a', 'd','b', '\0','\0' };
    printf("Source string: \n");
    gets(s);
    encodeChar(table,s,t);
    printf("Encoded string: %s\n", t);
    return 0;
}
void encodeChar(Rule table[5], char *s, char *t)
{
/* Write your program code here */
    int i = 0;
    while (s[i] != '\0'){
        if((s[i] == table[0].source)) {
             t[i] = table[0].code;
        } else if((s[i] == table[1].source)) {
             t[i] = table[1].code;
        } else if((s[i] == table[2].source)) {
             t[i] = table[2].code;
        }else if((s[i] == table[3].source)) {
             t[i] = table[3].code;
        }else {
            t[i] = s[i];
        }
        i++;
    }
    t[i+1] = table[4].code;
}
