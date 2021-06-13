#include<stdio.h>
int main()
{
    int i,j,rows,k;
    printf("Enter number of rows");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
   { k=i;


        for(j=1;j<=(2*rows-1);j++)
        {
            if(j>=5-i&&j<=3+i)
            {
                j<4?k++:k--;

                printf("%d",k);}
            else
                printf(" ");

        }
        printf(" \n");
    }
}
