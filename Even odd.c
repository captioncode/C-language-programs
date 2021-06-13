#include<stdio.h>
int main()
{
    int a,y;
    char t;
    do
    {

        printf("Enter a number check even  or not:\n");
    scanf("%d",&a);
   if(a%2==0)

printf(" Even number number:\n");
else
     printf(" Odd number:\n");
     printf(" Do you want to run again click y :\n");
fflush(stdin);
     scanf("%c",&t);
    }while(t=='y');
    getch();
}
without modulus operator
#include<stdio.h>
int main()
{
    int a,y;
    char t;
    do{
    printf("enter a number:\n");
    scanf("%d",&a);
    if(a/2*2==a)

        printf("Even number");
    else
    //if(a&1)
        printf("Odd number");
printf("Do you want to run again if yes then click y:\n");
fflush(stdin);
scanf("%s",&t);
}while(t=='y');
}
