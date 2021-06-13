#include<stdio.h>
void main()
{
    int a,cout=0;
    printf("enter four digit number\n");
    scanf("%d",&a);
    if(a/1000==0)cout++;
    if(a/100%10==0)cout++;
    if(a/10%10==0)cout++;
    if(a%10==0)cout++;
    else
        printf("no zero found");
    return 0;
}
