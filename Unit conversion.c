#include<stdio.h>
int main()
{
    char input;
    float kms_to_miles=0.621371;
    float inches_to_foot=0.08333;
    float cms_to_inches=0.3917;
    float pounds_to_kgs=0.4535;
    float inches_to_meters=0.0254;
    float first,second;
    while(1)
    {
        printf(" 1. kms to miiles :\n 2.inches to foot :\n 3.cms to inches ;\n 4.pounds to  kgs :\n 5. inches to meeter :\n ");
        scanf("%c",input );
        switch(input)
        {

        case '1':
            printf("Enter Quantity in terms if first unit ;\n");
            scanf("%f",&first );
            second = first *kms_to_miles ;
            printf("%f kms to equal to %f miles \n ",first,second );
            break;
        case '2':
            printf("Enter quantity in terms of first unit :\n");
            scanf("%f",first );
            second=first *inches_to_foot;
            printf("%f inches is equal to %f foot :\n ",first,second);
            break ;
        case '3':
            printf("enter quantity  of in terms of first unit ;\n");
            scanf("%f",&first);
            second=first*cms_to_inches;
            printf("%f cms is equal to %f inches ;\n",first,second);
            break;
        case '4':
            printf("Enter quantity of on terms of first unit ;\n");
            scanf("%f",&first);
            second=first*pounds_to_kgs;
            printf("%f is equal to kgs %f ;\n",first,second);
            break;
        case '5':
            printf("Enter quantity in terms of first unit :\n");
            scanf("%f",&first );
            second=first*inches_to_meters;
            printf("%f inches is equal to %f meters :\n ",first,second);
            break;


        }
    }

    return 0;
}
