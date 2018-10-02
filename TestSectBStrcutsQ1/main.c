#include <stdio.h>
typedef struct {
char name[20];
int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
/* Write your program code here */
    int i;
    for (i = 0;i < 3; i++){
        printf("Enter person %d:\n", (i+1));
        scanf("%s %d",p[i].name,&p[i].age);
    }
}
Person findMiddleAge(Person *p)
{
/* Write your program code here */
    int size = sizeof p; int i, minAge = p[0].age, maxAge = 1;
    for (i = 0;i < (size-1);i++){
            if(p[i].age < minAge){
                minAge = p[i].age;
            } else if(p[i].age > maxAge) {
                maxAge = p[i].age;
            }
    }
    for (i = 0;i < (size-1);i++){
            if((p[i].age != minAge) && (p[i].age != maxAge)){
               return p[i];
            }
    }
    return p[0];
}
