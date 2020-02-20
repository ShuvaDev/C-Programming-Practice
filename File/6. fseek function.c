#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp=fopen("test.txt","r+");
    if(fp==NULL){
        perror("File opening failed: ");
        return EXIT_FAILURE;
    }
    int ch;

    ch=fgetc(fp);
    printf("%c ",ch);
    ch=fgetc(fp);
    printf("%c ",ch);
    ch=fgetc(fp);
    printf("%c ",ch);

    fseek(fp,2,SEEK_CUR);
    ch=fgetc(fp);
    printf("%c ",ch);

    fseek(fp,-1,SEEK_END);
    ch=fgetc(fp);
    printf("%c ",ch);

    fclose(fp);
    return 0;
}
