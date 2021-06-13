#include<stdio.h>
void fun(int);
int main()
{

   int a=30;
    fun(a);//value change so, it is called formal arguments
   printf("%d ",a);
   return 0;
}
void fun(int b)
{
//int b;
b=60;
printf("%d ",b);
}

