#include<stdio.h>
int main()
{
    float l,w,r,A,P,Ar,cr;
    printf("Enter length ,breath of a rectangle and radius of circle\n");
    scanf("%f%f%f",&l,&w,&r);
    P=2*(l+w);
    printf("perimeter of a ractangle is %f\n",P);
    A=w*l;
    printf("Area of Ractangle is %f\n",A);
    Ar=3.14*r*r;
    printf("area if a circle %f\n",Ar);
    cr=2*3.14*r;
    printf("circumphrance of a circle %f\n",cr);
    return 0;


}
