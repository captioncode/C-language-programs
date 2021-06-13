#include<stdio.h>
int main()
{
    int marks[4];
    marks[0]=34;
    printf("Marks of student 1 is %d :\n",marks [0]);
    marks [0]=454;
    printf("marks of student 1 is %d :\n ",marks [0]);
    return 0;
}
int main()
{
    int marks [4],i;
    for(int i=0; i<4; i++)
    {
        printf("Enter the VALUE OF %d element of the Array :\n",i);
        scanf("%d",&marks[i]);

    }
    for (i=0;i<4;i++)
        printf("the value of %d element of the array is %d :\n",i,marks [i]);


    return 0;
}
int main()
{
    int marks[4]={45,32,2,4};
    int i;
    for(i=0;i<4;i++)
    {
        printf("Enter number of %d element of the array is %d:\n",i,marks[i]);

    }
    return 0;
}
int main()
{
    int marks[2][4]={{45,46,47},{34,33,35}};
    for(int i=0;i<2;i++)
    {
        {
            for(int j=0;j<3;j++)

               // printf("The value of %d \n,%d element of array is %d:\n",i,j,marks[i][j]);
            printf("%d ",marks[i][j]);
            printf("\n");
        }
    }
}
