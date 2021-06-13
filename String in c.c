#include<stdio.h>
//int main()
//{
//    char str[52];
//    gets(str);
//    puts(str);
//    //printf("%s",str);
//}
 void printstr(char str[])
 {
     int i=0;
          while(str[i]!=0)
     {
         printf("%c",str[i]);
         i++;
     }

 }
 int main()
 {
     char str[]={'s','h'};
     printstr(str);
     return 0;

 }
