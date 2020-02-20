#include<stdio.h>
#include<limits.h>
int main()
{
    printf("SHORT MIN: %hd\n",SHRT_MIN);
    printf("SHORT MAX: %hd\n",SHRT_MAX);
    printf("UNSIGNED SHORT MAX: %hu\n",USHRT_MAX);
    //
    printf("INT MIN: %d\n",INT_MIN);
    printf("INT MAX: %d\n",INT_MAX);
    printf("UNSIGNED INT MAX: %u\n",UINT_MAX);
    //
    printf("LONG MIN: %ld\n",LONG_MIN);
    printf("LONG MAX: %ld\n",LONG_MAX);
    printf("UNSIGNED LONG MAX: %lu\n",ULONG_MAX);
    //
    printf("LONG LONG MIN: %lld\n",LLONG_MIN);
    printf("LONG LONG MAX: %lld\n",LLONG_MAX);
    printf("UNSIGNED LONG LONG MAX: %llu\n",ULLONG_MAX);

    return 0;
}

