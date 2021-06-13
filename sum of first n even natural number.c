#include<stdio.h>
int main()
{
    int i=2,n,s=0;
    printf("Enter number");
    scanf("%d",&n);
    while(i<=2*n){
    s=s+i;
    i=i+2;
    }
        printf("%d",s);

}
