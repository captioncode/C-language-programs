//count digit in given number
#include<stdio.h >
int main()
{
    int count=0,x;
    printf("Enter a number \n");
    scanf("%d",&x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }
    printf("number of digit is = %d ",count);
    return 0;
}
