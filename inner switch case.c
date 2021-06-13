#include<stdio.h>
void main()
{
    int a,b,ch,ch1,ch2;
    printf("Enter two number \n");
    scanf("%d%d",&a,&b);
    printf("1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n");
    printf("enter your choice\n");
    scanf("%d",&ch);
    while(ch2=='1')
    {



    switch(ch)
    {
        case 1:printf("%d",a+b);
        break;
        case 2:printf("1.first value - second value\n");
        printf("2.second value -first value\n");
        printf("Enter your choice\n");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:printf("%d",a-b);
            break;
            case 2:printf("%d",b-a);
            break;
            default:printf("invalid entry");
        }
        case 3:printf("%d",a*b);
        break;
        case 4:printf("1.first value /second value\n");
        printf("2.second value -first value\n");
        printf("Enter your choice\n");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:printf("%f",(float)a/b);
            break;
            case 2:printf("%f",(float)b/a);
            break;
            default :printf("invalid choice\n");

        }
        break;
        default:printf("invalid choice\n");
    }
    printf("Enter 1 for again run\n");
    scanf("%d",ch2);
     }
    getch();

}
