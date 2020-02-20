#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in_img,*out_img;
    in_img=fopen("image1.jpg","rb");
    if(in_img==NULL)
    {
        perror("File opening failed");
        return EXIT_FAILURE;
    }
    out_img=fopen("copyimg.jpg","wb");
    int c;
    while(1)
    {
        //fscanf(in_img,"%c",&c);
        //fprintf(out_img,"%c",c);
        c=fgetc(in_img);
        if(c==EOF)
            break;
        fputc(c,out_img);
    }
    fclose(in_img);
    fclose(out_img);
    return 0;
}
