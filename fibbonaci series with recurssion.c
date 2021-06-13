#include<stdio.h>
int main()
{
    int fib(int);
    int i,n;
    label:
    printf("How many term to print series\n");
    scanf("d",&n);
    for(i=1;i<=n;i++)
        printf("%d",fib(i));
        goto label;
    return 0;

}
int fib (int n)
{
    if(n==1|| n==2)
        return (1);
    return (fib(n-1)+fib(n-1));
}

