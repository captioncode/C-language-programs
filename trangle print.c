#include<stdio.h>
void main()
 {
//
//    int i,j;
//    for(i=1;i<=5;i++)
//    {
//        for(j=1;j<=i;j++)
//            printf("%d",i);
//        printf("\n");
//    }
//}
/* 55555
   4444
   333
   22
   1
   */
//   int i,j;
//   for(i=5;i>=1;i--)
//   {
//       for(j=1;j<=i;j++)
//        printf("%d",i);
//        printf("%\n");
//   }
   /*5
     44
     333
     2222
     11111*/
     int i,j;
     for(i=5;i>=1;i--)
     {
         for(j=5;j>=i;j--)
            printf("%d",i);
            printf("%\n");
     }
}
