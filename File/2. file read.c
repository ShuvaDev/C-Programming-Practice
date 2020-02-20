#include<stdio.h>
int main()
{
    int num1,num2,sum;
    char ara[100];
    FILE *fp_in,*fp_out;
    fp_in=fopen("in.txt","r");
    fscanf(fp_in,"%d",&num1);
    fscanf(fp_in,"%d",&num2);
    sum=num1+num2;
    fp_out=fopen("out.txt","w");
    fprintf(fp_out,"Sum is: %d\n",sum);
    fclose(fp_in);fclose(fp_out);
    fp_out=fopen("out.txt","r");
    fscanf(fp_out,"%[^\n]",ara);
    printf("%s",ara);
    return 0;
}
