syntax:-
return type Function name (data type1, data type 2..){code be exicuted}
without argument and without return value
#include<stdio.h>
void  fun1(void)
{
    int array[10]={1,2,3,4,5,6};
    int i=0,sum=0;
    for(i=0;i<6;i++)
    {
        sum =sum+i;
    }
    printf("sum of All element is :%d ",sum);
}
int main()
{
    function calling
    fun1();
    return 0;
}
with argument and without return value
void printstar(int n)
{
int i;
   for(int i=0;i<n;i++)
   {
       printf("%c ",'*');
   }

}
int main()
{

    printstar(700);
    return 0;

}
with argument and with return value
int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int a,b,c;
    printf("Enter Two number:\n");
    scanf("%d%d",&a,&b);
    c=sum(a,b);
    printf("Sum of Two number is %d \n",c);
    return 0;
}
without argument and with return value
int takenumber (void)
{
    int i;
    printf("Enter a number:\n");
    scanf("%d",&i);
    printf("The Number You Entered is %d:\n",i);
}
int main()
{
    takenumber ();
    return 0;
}
