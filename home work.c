#include<stdio.h>
void main()
{

    int ch,ch1,ch2,ch3,ch4,ch5,ch6,ch7,ch8;
    printf("Which vehicle do you want to buy two wheeler or four wheeler?\n");
    printf("1.For two wheeler\n 2.for Four wheeler\n");
    printf("Enter your choice\n");
     scanf("%d",&ch);

    switch(ch)
    {
    case 1:printf("Do you want two wheeler bike or two wheeler scooty\n");
                  printf("3.for bike\n 4. for scooty\n");
                   scanf("%d",&ch1 );

                  switch(ch1)
                  {
            case 3: printf("Enter type of bike\n");
                      printf("5.livo\n 6.for Avenger\n 7.For pulser");
                      scanf("%d",&ch2);


                                  switch(ch2){
                    case 5:printf(" Livo BS6 Mileage =74 Kmpl\n Engine=109.5cc\n ");
                        printf("price = 91,776  - 1.27 lakhs\n");

                                    break;
                    case 6 :
                        printf(" Bajaj Avenger Mileage 40 to 52.18 km/l\n Engine=160cc\n ");
                        printf(" price = 91,776Rs - 1.27Rs lakhs\n");
                    break;
                    case 7 :  printf(" Pulsar Mileage 35 to 55 km/l\n Engine=150cc\n ");
                        printf("Pulsar Price = 70,618Rs - 1.57 Rs lakhs\n");
                break;

                   default:printf("invalid input\n");
                      break;
                     }


                     break;
            case 4: printf("Enter type of Scooty\n");
                      printf("8.For Activa\n 9.For Jupiter\n");
                      scanf("%d",&ch3);
                      switch(ch3)
                      {
                          case 8:printf(" Activa Mileage 50 to 60 km/l\n Engine=109.51 cc\n ");
                              printf(" price = 51,700 Rs - 81,762 Rs\n");
                          break ;
                          case 9:printf(" Jupiter Mileage 56 to 62 km/l\n Engine=110 cc cc\n ");
                              printf(" Price = 53,741 Rs - 75,640 Rs\n");
                          break;
                          default:printf("invalid input\n");

                        break;
                      }


                 break;
                  }

       break;
case 2:printf("Do you want to four wheeler Car or four wheeler tractor\n");
printf("10.For Car\n 11.For Tractor\n");
    printf("Enter your choice\n");
     scanf("%d",&ch4);
        switch(ch4)
        {
    case 10:printf("name of car \n");
            printf("12.For BMW\n 13. For safari\n 14. For Jaguar \n");
            scanf("%d",&ch5);

            switch(ch5)
            {
                case 12:printf("Enter color of BMW\n");
                printf("98.For white\n 99.For blue\n ");
                scanf("%d",&ch6);
                switch(ch6)
                {
                    case 98:printf("White BMW  price =60.50 - 60.90 Lakh*\n");
                    break;
                    case 99:printf("blue BMW  price =60.50 - 60.90 Lakh*\n");
                    break;
                    default : printf("invalid input\n");
                    break;

                }
                                    break;
                case 13:printf("Enter color of safari\n");
                printf("97.For white\n 96.For black\n ");
                scanf("%d",&ch7);
                switch(ch7)
                {

                    case 97:printf("blue safari  price =9.79 - 14.47 Lakh\n");
                    break;
                    case 96:printf("blue safari  price =9.79 - 14.47 Lakh\n");
                    break;
                    default : printf("invalid input\n");
                    break;

                }
                break;



                case 14:printf("Enter color of Jaguar\n");
                printf("95.For Narvik Black\n 94.For Santorini Black.\n ");
                scanf("%d",&ch8);

                        switch(ch8)

                   {
                    case 95:printf("Narvik Black  price = 1.11  Cr\n");
                    break;
                    case 94:printf("Santorini Black  price = 1.11 Cr\n");
                    break;
                    default : printf("invalid input\n");
                    break;

                }

                break;
                }
break;

    case 11:printf(" tractor price = 6.29 Lakh	7.15 Lakh\n");
    break;

        }


     break;
    }




return 0;
}
