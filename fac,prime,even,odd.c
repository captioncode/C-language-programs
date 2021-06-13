#include<stdio.h>
#include<stdlib.h>
main()
{
    int choice,num,i,fact;
   while(1)
    {
        printf("1.Factorial\n");
        printf("2.ODD/EVEN\n");
        printf("3.prime\n");
        printf("4.exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter a number\n");
            scanf("%d",&num);
            fact=1;
            for(i=1; i<=num; i++)
                fact=fact*i;
            printf("Factorial value=%d\n",fact);
            break;
        case 2:
            printf("Enter a number\n");
            scanf("%d",&num);
            if(num/2==0)
                printf("Even number\n");
            else
                printf("Odd number\n");
        case 3:
            printf("Enter a number\n");
            scanf("%d",&num);
            for(i=2; i<num; i++)
            {
                if(num%i==0)
                {
                    printf("Not prime number\n");
                    break;
                }
            }
            if(i==num)
                printf("prime number\n");
            break;
        case 4:
            exit(0);
        default :printf("Pagal ho kya ree");

        }
    }
    return 0;
}
