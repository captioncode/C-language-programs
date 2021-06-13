#include<stdio.h>
void main()
{
    long int  sal;
    printf("Enter you salary\n");
    scanf("%ld",sal);
    if (sal<1000)
        printf("Not an Empoloye");
    else if (sal<=10000)
        printf("Software tester");
    else if (sal<=25000)
        printf("software devloper");
    else if (sal<=50,000)
        printf("team lead");
    else if(sal<=100000)
        printf("Project manager");
    else
        printf("hr manager");
    return 0;
}
