//With Modular Operator
// modular operator remender deta hai
/*#include<stdio.h>
main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd Number");
    }
    return 0;
}
//Without Modular Operator*/
#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number \n");
    scanf("%d",&x);
    if(x&1)
    {
        printf("Odd Number");
    }
    else
    {
        printf("Even Number");
    }
    return 0;
}
