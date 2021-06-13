#include<stdio.h>
int main()

//{
//    int a,b,c;
//    printf("Enter age of Ram ,Shyam and Ajay\n");
//    scanf("%d%d%d",&a,&b,&c);
//    if(a>b && a>c)
//        printf("Ram is big\n");
// if(b>a && b>c)
//        printf("shyam is big\n");
//  if(c>a && c>b)
//        printf("ajay is big\n");
//
//    return 0;
//}
/*

{
float a,b,c;
 printf("Enter three angle of a trangle\n");
    scanf("%f%f%f",&a,&b,&c);
    if(a+b+c==180)
        printf("trangle is valid");
    else
        printf("Trangle is not valid");
    return 0;}
*/
//{
//    int x=30,y=20;
//    if(x==y)
//        printf("%d%d\n",x,y);
//    return 0;
//}
{
    int a,c;
    printf("Enter 5 digit number\n ");
    scanf("%d",&a); //12121

    if(a/10000*10000+a/100%10*1000+a/100%10*100+a/10%10*10+a%10*1==a)
        printf("c is reverse of a ");
    else
        printf("c is not revers of a");
    return 0;
}
