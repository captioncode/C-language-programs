#include<stdio.h>
void main()
{
    int n,i,x=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=2;i<=n/2; i++)
    {
        if(n%i==0){x=1; break;}

    }
    if(x==1)printf("Not prime\n");
    else printf("Prime");
    return 0;
}
