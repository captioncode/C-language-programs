#include<stdio.h>
#include<stdlib.h>

int main()
{
    int chars,i=0;
    char*ptr;
    while(i<3)
    {
        printf("Enter Number of charector in your employee id:\n");
         scanf("%d",&chars);
         ptr*(chars*)malloc((chars+1)*sizeof(chars));
         printf("Enter Your Employee id:\n");
         scanf("%s",&ptr);
         printf("Your Empployee ID is :\n",ptr);
         free(ptr);
         i=i+1;

    }
    getch();
}
