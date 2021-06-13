#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,r;
     float p;
    printf("Enter cartesian coordinate \n");
    scanf("%d%d",&a,&b);
    r=sqrt(a*a+b*b);
    p = b/a;
    printf("in cartision form %d %f",r,tan(p));
    return 0;
}
