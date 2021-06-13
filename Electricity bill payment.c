/*program in C to generate electricity bill.*/

#include<stdio.h>
#include<string.h>
int main ()
{
    int id,unit;
    float rate, fchg=0,gamt,amt;
    char name [35];
    printf ("customer ID :");
    scanf ("%d",&id);
    printf ("Customer Name: ");
    scanf ("%s",&name);
    printf ("Unit Consumed :");
    scanf ("%d",&unit);
    if (unit<150)
        rate=1.18;
    else if (unit>=150 && unit<300)
        rate = 1.60;
    else if (unit>300 && unit<500)
        rate =1.95;
    else
        rate=3;
    gamt=unit*rate;
    if(gamt>250)
        fchg=gamt*12/100;
    amt=gamt+fchg;
    if(amt<50)
        amt=50;
    printf("\n***************Electricity Bill  Details*********************\n");

    printf("Customer id                                 : %d\n",id);
    printf("Customer Name                               : %s\n",name);
    printf("Unit Consumed                               : %d\n",unit);
    printf("Amount charges  @$. %4.2f per unit           :%8.2f\n", rate,gamt);
    printf("Surcharges Amount                           :%8.2f\n",fchg);
    printf("Net Amount Your Electricity Bill is         :%8.2f\n",amt);


    printf(".....................................................................");
    return 0;
}





