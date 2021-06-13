#include<stdio.h>
void main()
{
    char str[100];
    int i;
    FILE*fp=fopen("data.txt","w");
    if(fp==NULL)
        printf("File oopening Faild:\n");
        else{

            printf("Enter txt:\n");
            for(i=1;i<5;i++)
            {
                gets(str);
                fputs(str,fp);
                fputs("\n",fp);
            }
            fclose(fp);
        }
                 getch();

}
