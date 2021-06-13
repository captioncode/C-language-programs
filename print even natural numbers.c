/*//Print first 10 even natural numbers
#include<stdio.h>
int main()

{
    int i=1;
   for(i=1;i<=10;i++)
   {
       printf("%d ",2*i);
   }
   return 0;
}
//print first n natural number*/
 #include<stdio.h>
int main()
{
    int i,n;
    printf("Enter value of n\n");
    scanf("%d",n);
   for(i=1;i<=n;i++)
   {
       printf("%d ",2*i);
   }
   return 0;
}
