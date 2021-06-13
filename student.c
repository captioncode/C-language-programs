#include<stdio.h>
#include<string.h>
//int main()
//{
//    char a,b;
//    int c;
//    printf("Enter your name\n and your father name\n and your mobile number\n");
//    scanf("%s%s%d",&a,&b,&c);
//    printf("Your name is %s\n Your Father name is %s\n your mobile number is %d",a,b,c);
//    return 0;
//
//}
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];

};
int main()
{
    union student s1;
    strcpy(s1.name ,"shivam ");
    s1.fav_char='u';
    s1.marks=45;
    s1.id=1;
    printf("The id is %d\n",s1.id);
    printf("The marks is %d\n",s1.marks);
    printf("The id is %d\n",s1.fav_char);
    printf("The id is %s\n",s1.name);
    return 0;
}
