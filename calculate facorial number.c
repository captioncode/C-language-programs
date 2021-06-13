#include<stdio.h>
int main()
{
    int a,fact,i,j;
         while(j){
    printf("Enter a  number for find factorial ");
    scanf("%d",&a);
        fact=i=1;
    while(i<=a)
    {
        fact=fact*i;
        i++;
    }

    printf("factorial of value is %d =%d\n",a,fact);
    printf("Do you want to again run if yes then press any key\n" );
    getch();
j++;
    }

    return 0;
}
