#include<stdio.h>
main()
{
  int yr;
  printf("Enter sun to check leap year\n");
  scanf("%d",&yr);
  if(yr%4==0 && yr%100!=0 || yr%400==0)
        printf("leap year");
  else
    printf("Not leap Year");
  return 0;
}
