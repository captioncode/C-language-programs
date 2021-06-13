#include<stdio.h>
int rsum(int);
int main()
{
int num ,sum;
int n;
printf("Enter a number");
scanf("%d",&num);
sum=rsum(num);
printf("sum of digit ids %d",sum) ;
return 0;
}
int rsum(int n)
{
    int s,remainder;
    if(n!=0)
    {
        remainder=n%10;
        s=remainder+rsum(n/10);
    }
    else
        return ;
    return s;
}
int sum(int x )
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    int sum(x);
    printf("sum of digit is %d",sum(x));
    return 0;
}
int sum(int a)
{
    if(x/10==0)
        return 0;
    return (x%10+sum/10);
}

