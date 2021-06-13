#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter number of row");
    scanf("%d",&k);
    for(i=1;i<=k;i++)
    {
        for(j=1;j<=k;j++)
        {
            if(j==i||j==k+1-i)
            {

                if(i==k+1-j)
                    printf("/");
                else
                printf("\\");
            }

            else
                printf("*");

    }
    printf("\n");
    }

}
