#include<stdio.h>
int main()
{
    int a=2,b;
    a=&b;
printf("%u\n",b);
printf("%d\n",*(&a));
printf("%d\n",*a);
return 0;
}
