#include<stdio.h>
void main()
{
    int a,b,c ,sum ,large;
    printf("Enter three sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            sum=b+c;
            large=a;
        }
        else
           {

            sum=a+b;
        large=c;
           }
    }
    else
    {
        if(b>a)
        {
            if(b>c)
            {
                sum=a+c;
                large=b;
            }
            else
            {
                sum=a+b;
                large=c;
            }
        }
    }
    if(sum>large)

    printf("Valid triangle ");
    else printf("Not valid triangle");
}
