#include<stdio.h>
void main()
//{
//    int a=10,b;
//    b=a;
//    a=1+10;
//    b=b-5;
//    printf("%d",a);
//    printf("%d",b);
//    return 0;
//}

{
    int b=10 ,*a;
    a=&b;
    *a=*a+10;
    b=*a+10;
    *a=*(&b)+10;
    b=b-5;
    printf("%d\n",b);
    printf("%d\n",*a);
    return 0;

}
