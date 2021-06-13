#include<stdio.h>
main()
{
    int a,b,c,d,large;
    printf("Enter three side of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c){
            d=c+b;
            large=a;
            }
            else
               {

{

}                d=a+b;
             large=c;
             }
    }
    else {

        if(b>c){
        d=a+c;
        large=b;
    }
    else{
        d=a+b;
        large=c;
}}
if(d>large)
    printf("triangle is valid ");
    else
    printf("Triangle is not valid ");

