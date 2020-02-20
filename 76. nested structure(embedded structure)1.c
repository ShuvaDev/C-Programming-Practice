#include<stdio.h>
struct Employee
{
    char *name;
    struct Date{
        int dd;
        int mmm;
        int yyyy;
    }dob;
}emp1;
int main()
{
    emp1.name="Shuva";
    emp1.dob.dd=18;
    emp1.dob.mmm=10;
    emp1.dob.yyyy=2001;
    printf("Name: %s Day: %d Month: %d Year: %d",emp1.name,emp1.dob.dd,emp1.dob.mmm,emp1.dob.yyyy);
    return 0;
}
