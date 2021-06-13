#include<stdio.h>
void main()
{
    int a;
    printf("Enter three digit number\n");
    scanf("%d",&a);
    if(a/100*1+a/10%10*10+a%10*100==a)
        printf("palindrom number");
    else
        printf("Not palindrom number");
    return 0;
}
