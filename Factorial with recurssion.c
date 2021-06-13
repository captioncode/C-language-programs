#include<stdio.h>
int facto(int n)
{
    if(n==1||n==0)
        return 1;
    else
        return n*facto(n-1);

}
int main()
{
    int x,c;
    printf("enter  number to find factorial:\n");
    scanf("%d",x);
    c=facto(x);
    printf("Factorial of this number is %d:\n",c);
    return 0;
}
