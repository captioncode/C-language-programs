#include<stdio.h>
#include<stdlib.h>
int main()

{
    int *ptr,n;
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    ptr = (int*)calloc(n,sizeof(int));
     printf("Enter Element of this Array:\n");
    for(int i=0;i<n;i++)

    {
               scanf("%d",&ptr[i]);

    }
    printf("Element of this Array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",ptr[i]);
    }
    getch();
}
