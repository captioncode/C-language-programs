#include<stdio.h>
int main()
{
    int p,n;
    printf("Enter number of n\n");
    scanf("%d",&n);
    p=sum(n);
    printf("sum of %d natural number is %d",n,p);

}
 int sum(int n)
{
    int s;
    if (n==1)
    return(n);
    s=n+sum(n-1);
    return (s);
}
