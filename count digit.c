#include<stdio.h>
//int main()
//{
//     int a,count=0;
//     printf("Enter a number:\n");
//     scanf("%d",&a);
//     while(a!=0)
//     {
//         a=a/10;
//         count++;
//     }
//     printf("Number of digit is %d",count );
//     getch();
//
//}
int main()
{
    int a,s=0,r;
    printf("Enter a number:\n");
    scanf("%d",&a);
    while(a!=0)
    {
        r93=a%10;
        s=s+r;
        a=a/10;
    }
    printf("Sum of digit is %d",s);
    getch();
}

