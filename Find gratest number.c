#include<stdio.h>
void main()
{
    int n,p,t;
    printf("Enter n,p,t numbers\n");
    scanf("%d%d%d",&n);
    if(n>p)
    {
        if(n>t)printf("n is grater\n");
        else printf("t id grater\n");
    }
    else if(p>t) printf("p is greater\n");
    else printf("t is greater\n");
    getch();


}
