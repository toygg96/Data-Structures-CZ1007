#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
    char name[20];
    char telno[20];
} PhoneBk;
int readin(PhoneBk *p);
void search(PhoneBk *p, int size, char *target);
int main()
{
    PhoneBk s[MAX];
    char t[20];
    int size;
    size = readin(s);
    printf("Enter search name: \n");
    gets(t);
    search(s,size,t);
    return 0;
}
int readin(PhoneBk *p)
{
/* Write your program code here */
    int count = 0;
    while(strcmp((p[count].name), "#") != 0){
        printf("Enter name:\n");
        scanf("\n");
        gets(p[count].name);
        if(strcmp((p[count].name), "#") == 0){
            break;
        }
        printf("Enter tel:\n");
        scanf("\n");
        gets(p[count].telno);
        count++;
    }
        return (count+1);
}
void search(PhoneBk *p, int size, char *target)
{
/* Write your program code here */
    int i, notFound = 1;
    for(i = 0;i < size;i++){
        if(strcmp((p[i].name), target) == 0){
              printf("Name = %s, Tel = %s\n", p[i].name,p[i].telno);
              notFound = 0;
        }
    }
    if (notFound == 1){
        printf("Name not found!\n");
    }
}
