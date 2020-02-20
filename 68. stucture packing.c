#include<stdio.h>
#pragma pack(0)
/**
    #pragma is a special purpose directive used to turn
    on or off certain feature.
**/
struct abc{
    char a;
    int b;
    char c;
} var;
int main()
{
    printf("%d",sizeof(var));
    return 0;
}
