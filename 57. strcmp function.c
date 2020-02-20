#include<stdio.h>
#include<string.h>
int main()
{
    /**
        str1==str2 -> 0
        str1<str2  -> less than 0
        str1>str2  -> greater than 0
    **/
    /**
        strcmp consider s1<s2:
        1. when the first character is s1 and s2 are same and (i+1) char
        is less thans2.
        2. when s1 and s2 match and s1 is shorter than s2.
    **/
    printf("%d\n",strcmp("shuvb","shuva"));
    printf("%d\n",strcmp("shuva","shuvb"));
    printf("%d\n",strcmp("shuva","shuvaA"));
    printf("%d\n",strcmp("shuvaA","shuva"));
    printf("%d\n",strcmp("shuva","shuva"));
    return 0;
}
