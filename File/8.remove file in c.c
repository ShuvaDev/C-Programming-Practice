#include<stdio.h>
int main()
{
    int return_value;
    char *filename="copyimg.jpg";
    return_value=remove(filename);
    if(return_value!=0)
    {
        perror("File remove failed!");
        return 1;
    }
    printf("%s remove successfully!\n",filename);
    return_value=remove(filename);
    if(return_value!=0)
    {
        perror("File remove failed!");
        return 1;
    }
    printf("%s remove successfully!\n",filename);
    return 0;

}

