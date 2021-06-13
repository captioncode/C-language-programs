#include<stdio.h>
int main()
{
    printf("Let learn about pointer:\n");
    int a=76;
    int *ptra=&a;
    printf("The address of pointer is a is %p:\n",ptra);
    printf("The address of pointer is a is %p:\n",&a);
    printf("The address of pointer is a is %p:\n",ptra);
    printf("The address of pointer is a is %d:\n",*ptra);
    printf("The address of pointer is a is %d:\n",a);
    return 0;
}

