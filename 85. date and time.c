#include<stdio.h>
#include<string.h>
#include<windows.h>
struct time{
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMin;
    WORD wSec;
    WORD wMilliSec;
};
typedef struct time Time;
int main(int x,char *argv[])
{
    Time tm;
    GetLocalTime(&tm);
    char DAY[5];
    switch(tm.wDayOfWeek)
    {
    case 0:
        strcpy(DAY,"SUN");
        break;
    case 1:
        strcpy(DAY,"MON");
        break;
    case 2:
        strcpy(DAY,"TUE");
        break;
    case 3:
        strcpy(DAY,"WED");
        break;
    case 4:
        strcpy(DAY,"THU");
        break;
    case 5:
        strcpy(DAY,"FRI");
        break;
    case 6:
        strcpy(DAY,"SAT");
        break;

    }
    printf("Date: %d/%d/%d\tTime: %d:%d:%d %s",tm.wDay,tm.wMonth,tm.wYear,tm.wHour-12,tm.wMin,tm.wSec,DAY);

}

