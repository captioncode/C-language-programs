#include<stdio.h>
  int main()
{
    int n,y;
    char t;
     do
 {

    printf("Enter number for print Table:\n");
    scanf("%d:\n",&n);
    int i;
    for(i=1;i<11;i++)
        printf("%d*%d =%d \n",n,i,n*i);
          printf("\a");
               printf("Do You want run again click y or h\n");
        fflush(stdin);
        scanf("%c",&t);


 }while(t=='y' || t=='h');

 getch();
}

