#include<stdio.h>

 void main()
{
    fib_recursive(int );
    printf("Fibonacci series of this number is %d",fib_recursive);
    return 0;
}
fib_recursive(int n);
{
    if(n==1 || n==2 )
        return n-1;
    else
        return fib_recursive(n-1)+fib_recursive(n-2);
 }
