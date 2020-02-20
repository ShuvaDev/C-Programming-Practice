#include<stdio.h>
#include<stdlib.h>
struct Person{
    char *name;
    int age;
};
struct Person functionX()
{
    struct Person person;
    person.name="Shuva";
    person.age =18;
    return person;
}
struct Person* functionY()
{
    struct Person *pPerson;
    pPerson=malloc(sizeof(struct Person));
    pPerson->name="Shuva Dev";
    pPerson->age=19;
    return pPerson;
}
int main()
{
    struct Person shuva,*ptrPerson;

    shuva=functionX();
    printf("Name: %s\tAge: %d\n",shuva.name,shuva.age);

    ptrPerson=functionY();
    printf("Name: %s\tAge: %d",ptrPerson->name,ptrPerson->age);
    return 0;
}

