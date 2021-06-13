#include<stdio.h>
#include<string.h>
struct student
{
    char Your_Name[50];
   char Your_father_Name [50];
    char Your_Mother_Name_[50];
    int Your_Mobile_Number;
    char Your_Mail_id[50];
    };
    int main()
    {
        struct student e;
        printf("enter Your name:\n enter Your Father name:\n enter Your mother name:\n enter Your mobile number :\n enter Your mail id:\n");
         scanf("%s%s",&e.Your_Name,&e.Your_father_Name,&e.Your_Mother_Name_,&e.Your_Mobile_Number,&e.Your_Mail_id);

        printf("Your name is %s\n Your Father name  is %s \n enter Your mother name is %s:\nenter Your mobile number %d:\n enter Your mail id is %s:\n",e.Your_Name,e.Your_father_Name,e.Your_Mother_Name_,e.Your_Mobile_Number,e.Your_Mail_id);


    }

