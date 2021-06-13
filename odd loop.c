#include<stdio.h>
main()
{
    char another ;
    int num;
    do
    {
        printf("Enter a number\n");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
         printf("Want to another number y/n\n");
         fflush(stdin);
         scanf("%c",&another);
    }
    while(another =='y');
    return 0;
}
