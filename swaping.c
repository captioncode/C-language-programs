#include<stdio.h>
//int main()
//{
////    int a,b,t;
////    printf("Enter two number\n");
////    scanf("%d%d",&a,&b);
////        printf(" before swaping  a=%d and b=%d\n",a,b);
////    t=a;
////    a=b;
////    b=t;
////    printf(" after swaping  a=%d and b=%d",a,b);
////}
////without using third variable
//int a,b;
// printf("Enter two number\n");
//    scanf("%d%d",&a,&b);
//        printf(" before swaping  a=%d and b=%d\n",a,b);
//a=a+b;//a=1,b=2 a=3
//b=a-b; //b=1
//a=a-b;//a=2
//
//printf(" after swaping  a=%d and b=%d",a,b);
//return 0;
//}
//swaping using pointer
void swap(int*,int*);
int main()
{
int a=10,b=19;
swap(&a,&b);
printf("a=%d b=%d\n",a,b);
return 0;
}
void swap(int *x,int *y)
{
    int t;
    t=*x;
    *x=*y;
    *y=t;
}
