#include<stdio.h>
int main()
{
    float x=10.2f;
    printf("x = %f\n",x);
    double y=10.2030;
    printf("y = %lf\n",y);
    long double z=34.293;
    printf("z = %Lf\n",z);
    float a=10.2e3;
    float b=1000.2323e-3;
    printf("a = %f\n",a);
    printf("b = %f\n\n",b);
    //
    float c=10.2324354545464645f;
    double d=10.23243545454646456789;
    long double e=10.23243545454646456789012345;
    printf("c = %.16f\td = %.16lf\te = %.21Lf\n",c,d,e);
    return 0;
}

