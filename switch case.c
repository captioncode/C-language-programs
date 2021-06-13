#include<stdio.h>
int main()
{
    int age;
    printf("Enter Your Age For voting\n");
    scanf("%d",&age);

        switch(age)

        {


        case 3:
            printf("Your Age is less than 18 so,You Can't vote:\n");
            break;
        case 13:
            printf("Your Age is less than 18 so,You Can't vote:\n");
            break;
        case 15:
            printf("Your Age is less than 18 so,You Can't vote:\n");
            break;
        case 18:
            printf(" You so lucky you can vote");
            break;
        default :
            printf("Your age is  not 3,13,15,18 ");
        }

    return 0;
}
