#include<stdio.h>
void main()
{
    int a;
    printf("Enter any year\n");
    scanf("%d",&a);
    if(a%400==0)
        printf("Leap year");
    else if (a%4==0)
    {
        if(a%100!=0)
            printf("leap year");
        else printf("Not leap year");

    }
    else ("Not leap year");
}
