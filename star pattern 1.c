#include<stdio.h>
int main()

{
int i,j,x;
char t;
do{
printf("How many row do you want to print");
scanf("%d",&x);
for(j=1;j<=x;j++){
for(i=1;i<=x;i++)
{
    if(i<=j)
    printf("*");

}
printf("\n");
}
printf("Do You want run again click y or h\n");
        fflush(stdin);
        scanf("%c",&t);
}while(t=='y' || t=='h');
}
//j=1/2/3/4
//i=1/12/123/1234 =i<1/i<2/i<3/i<4
