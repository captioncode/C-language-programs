#include<stdio.h>
int main()
{
    float km,m,cm,feet,inc ;
    printf("Enter distance in km\n");
    scanf("%f",&km);
    m=km*1000;
    cm=km*100000;
    feet=km*3280.84;
    inc=km*39370.1;
    printf("in meeter %.2f\n",m);
    printf("in cm %.2f\n",cm);
    printf("in feet %.2f\n",feet);
    printf("in inch %.2f\n",inc);

    return 0;

}
