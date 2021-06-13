#include<stdio.h>
struct driver
{
    char name[34];
    char dl_no[34];
    char route[47];
    int kms;

};
int main()
{

    struct driver d1,d2,d3;
     label:
    printf("Enter details if the drivers:\n");
    scanf("%s",&d1.name);
       printf("Enter dl number of first driver:\n");
    scanf("%s",&d2.dl_no);
    printf("Enter route of first driver:\n");
    scanf("%s",&d1.route);
    printf("Enter the number of kms of driver:\n");
    scanf("%d",&d2.kms);
    goto label;
    getch();
}
