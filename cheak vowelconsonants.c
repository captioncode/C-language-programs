#include<stdio.h>
#include<ctype.h>
   int main()
{
    char ch;
    printf("Enter any Character\n");
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch =='a' || ch =='i' || ch =='o' || ch =='e' || ch=='u')
        printf("vowel");
    else
        printf("Consonet");
    return 0;
}
