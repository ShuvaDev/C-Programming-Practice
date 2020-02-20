#include<stdio.h>
int main()
{
    char line[100];
    int sum_marks=0,mark,roll;
    FILE *in_math,*in_bangla,*in_english,*out_result;

    in_math=fopen("math.txt","r");
    in_bangla=fopen("bangla.txt","r");
    in_english=fopen("english.txt","r");
    out_result=fopen("result.txt","w");
    while(!feof(in_math))
    {
        fgets(line,100,in_math);
        sscanf(line,"%d%d",&roll,&mark);
        sum_marks+=mark;

        fgets(line,100,in_english);
        sscanf(line,"%d%d",&roll,&mark);
        sum_marks+=mark;

        fgets(line,100,in_bangla);
        sscanf(line,"%d%d",&roll,&mark);
        sum_marks+=mark;

        fprintf(out_result,"%d %.2f\n",roll,(float)sum_marks/3);
        sum_marks=0;
    }
    return 0;
}
