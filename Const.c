#include<stdio.h>
int main()
{
    int a=8;
    const float b=10;
    //b=7.5;//can't do this since b is a constant
    printf("%d :\n%f :\n",a,b);
    return 0;
}
