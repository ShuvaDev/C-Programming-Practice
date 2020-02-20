#include<stdio.h>
int main()
{
    char *ptr="Shuva";// This pointer store the address of first character.
    // Compiler automatically put null character ending the word.
    printf("%s\n",ptr);

    char ara[]={'s','d','\0'};
    puts(ara);

    char ara1[10];
    gets(ara1);// If we input string with gets() then it can take a line with space.
    // But if total input character is greater than array size then it produce array.
    // Same problem occurs in printf();
    puts(ara1);

    char ara2[10];
    scanf("%9s",ara2);// In scanf() if you input "shu va" then compiler store "shu". Because
    // When compiler show space then other character of input will not store.

    // -> If we write %9s then it will store 9 character of inputed string.
    puts(ara2);
    return 0;
}
