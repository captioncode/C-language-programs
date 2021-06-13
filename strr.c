#include<stdio.h>
int main()
{
    int i,j,k,row;
    printf("Enter number of rows");
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        k=row-i;
        for(j=1;j<=row;j++)
        {
            if(j<=row+1-i){
                    printf("%d ",k);
                k--;
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}
