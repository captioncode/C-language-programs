#include<stdio.h>
  int rec(int );

 int main()
{
    int a,fac;
    while(1){
    printf("Enter a number\n");
    scanf("%d",&a);
    fac=rec(a);
    printf("factorial up to %d is= %d\n",a,fac);

}
}


int rec(int i)
{
    //int i;
    if(i==0 || i==1 )
        return 1;
    else
        return i*rec(i-1);

}


