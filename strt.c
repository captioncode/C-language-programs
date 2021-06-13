#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter number of row");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {

        for(j=1;j<=9;j++)
        {
            if(j>=i&&j<=10-i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
