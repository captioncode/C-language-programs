//swap with using third variable:
//#include<stdio.h>
//int main()
//{
//    int a,b,temp;
//    printf("Enter two number:\n");
//    scanf("%d%d",&a,&b);
//temp=a;
//a=b;
//b=temp;
//printf("After swap then number is a=%d and b= %d",a,b );
//getch();
//}
//swap without third variable;
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number for swap:\n");
    scanf("%d%d",&a,&b);
    a=a+b;//a=4,b=3/a=7
    b=a-b;//a=7,b=3/b=4
    a=a-b;//a=7,b=4/a=3
    printf("After swap then value is %d and %d",a,b);
    getch();

}
