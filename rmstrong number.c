#include<stdio.h>
#include<math.h>
void main()
{
    int a;
    printf("Enter three digit number\n");
    scanf ("%d",&a);
    if(pow(a/100,3)+pow(a/10%10 ,3)+pow(a%10 ,3)==a)
        printf("Armstrong number");
    else printf("Not Armstrong number");
    return 0;
}
