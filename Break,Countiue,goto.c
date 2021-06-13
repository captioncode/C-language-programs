#include<stdio.h>
int main()
{
    int i,age;
      for(i=0;i<5;i++)
    printf("Enter Your age :\n",i);
    scanf("%d",&age);
  if(age>3)
  {
     break;
     continue;
  }

  return 0;

}
int main()
{
    label;
    printf("We are inside label:\n");
    got end:
    printf("Hello World :\n");
    goto label:
    end:
        printf("we are at end:\n");
        return 0;
}
