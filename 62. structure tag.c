#include<stdio.h>
struct employee{
    char *name;
    int age;
    int salary;
};
int manager()
{
    struct employee manager;
    manager.age=30;
    if(manager.age>=30)
    {
        manager.salary=55000;
    }else{
        manager.salary=35000;
    }
    return manager.salary;
}
int main()
{
    struct employee emp1,emp2;
    printf("Enter the salary of employee1: ");
    scanf("%d",&emp1.salary);
    printf("Enter the salary of employee2: ");
    scanf("%d",&emp2.salary);
    printf("Empolyee1 salary is: %d\n",emp1.salary);
    printf("Empolyee2 salary is: %d\n",emp2.salary);
    printf("manager salary is: %d\n",manager());
    return 0;
}
