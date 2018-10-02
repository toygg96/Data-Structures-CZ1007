#include <stdio.h>
#include <string.h>
struct account {
    struct {
        char lastName[10];
        char firstName[10];
    } names;
int accountNum;
double balance;
};
void nextCustomer(struct account *acct);
void printCustomer(struct account acct);
int main()
{
    struct account record;
    int flag = 0;
    do {
        nextCustomer(&record);
    if ((strcmp(record.names.firstName, "End") == 0) &&
        (strcmp(record.names.lastName, "Customer") == 0))
        flag = 1;
    if (flag != 1)
        printCustomer(record);
    } while (flag != 1);
}
void nextCustomer(struct account *acct)
{
/* Write your program code here */
    printf("Enter names (firstName lastName):\n");
    scanf("%s %s", acct[0].names.firstName, acct[0].names.lastName);
    if((strcmp(acct[0].names.firstName,"End") == 0) && (strcmp(acct[0].names.lastName, "Customer") == 0)){
        return;
    }
    printf("Enter account number:\n");
    scanf("%d", &acct[0].accountNum);
    printf("Enter balance:\n");
    scanf("%lf", &acct[0].balance);
}
void printCustomer(struct account acct)
{
/* Write your program code here */
    struct account acc = acct;
    printf("Customer record:\n%s %s %d %.2lf\n", acc.names.firstName, acc.names.lastName, acc.accountNum, acc.balance);
}
