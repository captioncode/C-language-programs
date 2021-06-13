#include<stdio.h>
void main()
{
    char ch;
    printf("Enter any charecter \n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='i'  || ch=='o'  || ch=='u'  || ch=='e')
        printf("vowel");
    else
        printf("Consonats");
    return 0;
}
