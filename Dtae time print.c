#include<stdio.h>
#include<stdlib.h>
int main()
{
    printf("FILE Name is %s:\n",__FILE__);
    printf("Today date is %s:\n",__DATE__);
    printf("LINE NO is %d:\n",__DATE__);
    printf("Time is now %s:\n",__TIME__);
    printf("ANSI: %d:\n",__STDC__);
    getch();
}
