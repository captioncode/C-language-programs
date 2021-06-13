#include<stdio.h>
void main()
{
    int yr;
    printf("Enter any Year\n");
    scanf("%d",&yr);
    if(yr%400==0)
        printf("Leap year");
    else if(yr%4==0){
            if(yr%100!=0)
        printf("leap year");
    else
        printf("not leap year");
}
else
    printf("not leap year");
return 0;
}
