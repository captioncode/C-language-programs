//with using third variables
/*#include<stdio.h>
main()
{
    int a,b,shivam;
    printf("Enter the value of a and b\n");
    scanf("%d%d",&a,&b);
    a=shivam;
    a=b;
    b=shivam;
    printf("swaping of   number is %dand %d",a,b);
    return 0;
}
//without using third variables*/
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a and b \n");
    scanf("%d%d",&a,&b);
a=a+b;//1+2=3
b=a-b;//3-2=1
a=a-b;//3-1=2
printf("Swaping of  number is %d and %d",a,b);
return 0;
}
