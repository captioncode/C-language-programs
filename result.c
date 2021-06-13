#include<stdio.h>
void main ()
{
int a,b,c,d,e,tot;
float per;
printf("Enter marks of 5 subjects\n ");
scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 if(a<=100&&a>0 && b>0 &&b<=100 && c>0 && c<=100&& d>0&&d<=100 && e>0 && e<=100)
         tot=a+b+c+d+e;
        per=tot/5;
        printf("total = %d\n",tot);
        printf(" percentage =%f",per);

}

