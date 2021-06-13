#include<stdio.h>
int  main()
{
    int a,p;
     for(;;){
    printf("enter a number which you want to find factorial\n");
    scanf("%d",&a);
    p=fact( a);
    printf("factorial of this number is %d \n",p);
   // printf("if end the screen the click y");
    }

    return 0;
}

int fact (int b)
{
    if(b==1 || b==0)
        return 1;
    return b*fact(b-1);
}
