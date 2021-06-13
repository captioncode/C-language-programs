#include<stdio.h>
main()
{
  int n,i;
  printf("Enter  number");
  scanf("%d",&n);
     for(i=2;i<n-1;i++)
  {
    if(n%i==0)
      break;
  }
  if(i==n)
    printf("is a Prime number:\n");
  else
    printf(" is not prime number:\n");

}
