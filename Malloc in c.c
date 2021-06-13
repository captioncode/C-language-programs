
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr ,n;
    printf("Enter size of Array:\n");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter element of this Array At this %d Position:\n ",i);
        scanf("%d",&ptr[i]);

    }
    for( int i=0;i<n;i++)
    {
        printf("Element of this Array At %d Position is %d\n:",i,ptr[i]);
    }
    getch();
}
