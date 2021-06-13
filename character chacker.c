#include<stdio.h>
void main()
{
    char ch;
    printf("Enter character \n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)

        printf("Character is upper case letter");
    else if(ch>=97 && ch<=122)
        printf("Character is lower case");
    else if(ch>=48 && ch<=57)
        printf("Character is digit\n");
   if((ch>=0 && ch<48) || (ch>57 && ch<65) || (ch>90 && ch<97) || ch>122)
         printf("Character is spacial symbol");
    return 0;
}
