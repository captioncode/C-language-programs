#include<stdio.h>
#include<stdlib.h>
int i;
int main()
{
    int *ptr,n;
        printf("Enter size of Array:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(sizeof(int));
    printf("Enter Element of this Array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Your Array Elements Are :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("Enter new size of Array:");
    scanf("%d",&n);
   ptr = (int*)realloc(ptr,sizeof(int));

        printf("Enter new Array Element :\n");
        for(i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    printf("Your New array element is :\n");
    for(i=0;i<n;i++)
    {
        printf("%d",ptr[i]);
    }
    free(ptr);
    getch();

}
