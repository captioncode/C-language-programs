#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    ptr=fopen("myfile.txt","w");
    fputs('o',ptr);
    fputc("this is harry ",ptr);
    fclose(ptr);
    return 0;
}
