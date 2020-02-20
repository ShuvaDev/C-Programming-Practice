#include<stdio.h>
#pragma pack(1)
struct store{
    double price;
    union {
        struct{
            char *tittle;
            char *author;
            int num_page;
        }book;
        struct{
            int color;
            int size;
            char *design;
        }shirt;
    }item;
};
struct store1{
    double price;
    char *tittle;
    char *author;
    int num_page;
    int color;
    int size;
    char *design;
}s2;
int main()
{
    struct store s1;
    printf("%d\t%d",sizeof(s1),sizeof(s2));
    return 0;
}
