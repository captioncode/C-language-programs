#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number b/w 1 to 10\n");
    scanf("%d",&a);
    switch(a)
    {
        case 1:
        case 2:
        case 3:printf("ok");
        break;
        case 4:
        case 5:
        case 6:printf("good");
        break;
        case 7:
         case 8:
        case 9:
        case 10:printf("very good");
         break;
         default : printf("pagal ho jo likha hai wahi karo ");
    }
    return 0;
}
