#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggr;
    float per;
    printf("Enter markes in five subject\n");
    scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
    aggr=m1+m2 + m3 + m4 +m5;
    per=aggr/5.0;
    printf("Aggreat marks is equal  to %d\n",aggr);
    printf("percentage marks is equal  to %f\n",per);
    return 0;

}
