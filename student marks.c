#include<stdio.h>
  main()
{
  int a,b,c,d,e,tot;
  float per;
  printf("Enter 5 subject markes\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a<=100 &&  b<=100 &&  c<=100 &&  d<=100 &&  e<=100 && a>=0 && b>=0 && c>=0 && d>=0 && e>=0 )
    {
        tot=a+b+c+d+e;
        per=tot/5.0;
        printf("total=%d\n",tot);
        printf("per=%.2f\n",per);

    }
    if(per<23)
        printf("fail\n");
    else if (per>=33 && per<50)
    printf("passed 3rd devision\n");
    else if (per>=50 && per<75)
        printf("passed 1st division\n");
    else
        printf("first with distinction\n");
    return 0;
}
