/*//print first 10 odd natural numbers
#include<stdio.h>
int main()
{
    int i=1;
    for(i=1;i<=10;i++)
        {
            printf("%d ",2*i-1 );
        }
        return 0;
    }
//print first 10 odd  revers natural numbers
#include<stdio.h>
int main()
{
    int i=10;
    for(i=10;i>=1;i--)
        {
            printf("%d ",2*i-1 );
        }
        return 0;
    }
//print first n odd  revers natural numbers
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of n\n");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
        {
            printf("%d ",2*i-1 );
        }
        return 0;
    }
//print first n odd  natural numbers*/
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of n\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("%d ",2*i-1 );
        }
        return 0;
    }
