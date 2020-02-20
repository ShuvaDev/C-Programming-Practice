#include<stdio.h>
struct address{
    char city[20];
    int pin;
};
struct employee{
    char name[20];
    struct address add;
};
int main()
{
    struct employee emp1;
    printf("Enter employee information: ");
    printf("Name: ");
    gets(emp1.name);
    printf("City: ");
    gets(emp1.add.city);
    printf("Pin: ");
    scanf("%d",&emp1.add.pin);
    printf("Name: %s\tCity: %s\tPin: %d\n",emp1.name,emp1.add.city,emp1.add.pin);
    return 0;
}
