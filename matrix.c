#include<stdio.h>
int main()
{
    int i,j,a[3][3],b[3][3],c[3][3];
    printf("Enter first 9 number for 1 matrix\n");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            scanf("%d",&a[i][j]);
    printf("Enter first 9 number for 2 matrix\n");
    for(i=0; i<=2; i++)
        for(j=0; j<=2; j++)
            scanf("%d",&b[i][j]);

    printf("sum of 2 matrix\n");
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d ",c[i][j]);

        }
        printf("\n");
    }
    return 0;
}
