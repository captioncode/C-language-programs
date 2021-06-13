#include<stdio.h>
int main()
{
    int a,x;
    printf("Enter 4  digit number for preview revers number");
    scanf("%d",&a);

    printf("%d%d%d%d ",a%10,a%100/10,a/100%10,a/1000 );
    return 0;
}
