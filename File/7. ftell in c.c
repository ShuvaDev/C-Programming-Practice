#include<stdio.h>
int main()
{
    FILE *fp=fopen("image.jpg","rb");
    fseek(fp,0,SEEK_END);
    printf("File size: %ld\n",ftell(fp));
    printf("File size(kilobyte): %ld\n",ftell(fp)/1024);
    return 0;
}
