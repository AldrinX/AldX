#include<stdio.h>
#include<string.h>
#include<time.h>
#include<conio.h>

 struct user{
 char name[100];
 int ph[11];
 char location[100];
 char ds[100];
 int hp;


 };


int main(){
struct user a;
int b,n,c,i,j,f,d,p,q;
char ch;
float price_1=100.00;
float price_2=250.00;
float price_3=200.00;
float price_4=300.00;
float price_5=120.00;
float price_6=420.00;
float price_7=260.00;
float price_8=210.00;
float price_9=150.00;
float price_10=180.00;
float price_11=340.00;
float price_12=160.00;
float rate_van=1.08;
float rate_suv=1.06;
float rate_mvan=1.03;
float rate_pcar=1.10;
float sum=0.0;
time_t t;
FILE *fp;

system("color 8F");        /*0 = Black       8 = Gray
                             1 = Blue        9 = Light Blue
                             2 = Green       A = Light Green
                             3 = Aqua        B = Light Aqua
                             4 = Red         C = Light Red
                             5 = Purple      D = Light Purple
                             6 = Yellow      E = Light Yellow
                             7 = White       F = Bright White*/
   time(&t);

   fp = fopen("D://online taxi orders.txt", "a+");


   printf("                                         Date and Time : %s",ctime(&t));
    printf("                            \n\n                                               Online Taxi Ordering System\n");



    printf("\nBook taxi from here and travel conveniently. \n\nTo book a taxi, please fill up the form\n\n");
    printf("Name: ");
    scanf("%s", a.name);


    printf("\nYour contact number: +088");
    scanf("%d", &a.ph);

    printf("\nEnter from which location are you travel from: ");
    scanf("%s", a.location);

    fprintf(fp, "Name: %s\nYour Location: %s\nYour Destination: %s\nTime: %d : %d\nYour number:%d",a.name,a.ds,p,q, a.ph);
   fclose(fp);



    printf("\nWe have 4 stations. Choose any station that would be convenient for you from your location:");

    printf("\nYour options are :\n                 Press 1 for Dhanmondi\n                 Press 2 for Gulshan\n                 Press 3 for Uttara\n                 Press 4 for Puran Dhaka\n");
    printf("\n                 Enter your choice:");
    scanf("%d",&f);


    if(f==1){
            printf("\n\nIn which location are you going? : ");
            scanf("%s",a.location);

        printf("\nWhere would you like to go from Dhanmondi? Choose any station which will be near your destination.");
        printf("\n\nPress 1 for gulshan\nPress 2 for Uttara\nPress 3 for Puran Dhaka");
        printf("\n\nEnter your choice :");
        scanf("%d",&d);
        switch(d){                                                          //price 1
        case 1: printf("\nTo travel to Gulshan from Dhanmondi, it will cost %.2f",price_1);
        printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }

        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_1*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_1*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_1*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_1);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_1*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_1*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_1*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_1*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Dhanmondi station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/online taxi ordering system.\n\n");


        break;
                                                                          //price 2
        case 2: printf("To travel from Dhanmondi to Uttara it will cost %.f", price_2);
       printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_2*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_2*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_2*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("\nEnter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_2);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_2*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_2*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_2*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_2*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");

    }
    printf("\n\nYour order has been placed, a taxi would be waiting for you at Dhanmondi station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/online taxi ordering system.\n\n");

        break;

                                                                         //price 3
        case 3: printf("To travel from Dhanmondi to Puran dhaka it will cost %.2f",price_3);
printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\nWhen do you need a taxi? : ");
            printf("\nHour:");scanf("%d", &p);printf("\nMinute :");scanf("%d", &q);
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.''\n");
                    printf("Enter choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_3*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_3*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_3*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("\nEnter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_3);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_3*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_3*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_3*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_3*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");

    }
   printf("\n\nYour order has been placed, a taxi would be waiting for you at Dhanmondi station at %d : %d. \n\n", p,q);
        break;

        default:
            printf("Invalid input!!! Please restart the program.");
        }

        }
        if(f==2){
            printf("In which location are you going to? : ");
            scanf("%s",a.location);



        printf("\nWhere would you like to go from Gulshan? Choose any station which will be near your destination.");
        printf("\nPress 1 for Dhanmondi\nPress 2 for Uttara\nPress 3 for Puran Dhaka");
        printf("\nEnter your choice :");
        scanf("%d",&d);
        switch(d){
        case 1: printf("To travel to Dhanmondi from Gulshan it will cost %.2f",price_4);

            printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_4*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_4*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_4*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chose a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_4);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_4*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_4*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_4*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_4*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
           printf("\n\nYour order has been placed, a taxi would be waiting for you at Gulshan station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/Online taxi ordering system.\n\n");
            break;
            case 2:
            printf("To travel to Uttara from Gulshan it will cost %.2f",price_5);
             printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_5*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_5*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_5*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_5);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_5*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_5*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_5*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_5*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Gulshan station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to C:/Online ordering system.\n\n");
            break;

        case 3:
            printf("To travel to Puran Dhaka from Gulshan it will cost %.2f",price_6);
            printf("\For what time do you want to book a taxi?:");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_6*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_6*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_6*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_6);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_6*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_6*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_6*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_6*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Gulshan station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to C:/Online taxi ordering system.\n\n");

            break;

        }
        }

if(f==3){
        printf("Where would you like to go from Uttara?\n");
        printf("\nPress 1 for Gulshan\nPress 2 for Dhanmondi\nPress 3 for Puran Dhaka");
        printf("\nEnter your choice:");
        scanf("%d",&d);
        switch(d){
            case 1:
 printf("To travel to Gulshan from Uttara it will cost %.2f",price_7);

            printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again:");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_7*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_7*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_7*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter you choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_7);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_7*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_7*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_7*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_7*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
           printf("\n\nYour order has been placed, a taxi would be waiting for you at Uttara station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/Users/Online taxi service.txt\n\n");
            break;
            case 2:
            printf("To travel to dhanmondi from Uttara it will cost %.2f",price_8);
             printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_8*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_8*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_8*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            printf("Enter your choice again");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_8);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_8*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_8*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_8*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_8*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Uttara station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:\Online taxi ordering system.\n\n");
            break;

            case 3:
            printf("To travel to Puran Dhaka from Uttara it will cost %.2f",price_9);
            printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again");

                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_9*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_9*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_9*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_9);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_9*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_9*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_9*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_9*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Uttara station %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/Online taxi ordering system.\n\n");

            break;

        }
}

if(f==4){
         printf("In which location are you going? : ");
            scanf("%s",a.location);

        printf("Where would you like to go from Puran Dhaka?");
        printf("\nPress 1 for Gulshan\nPress 2 for Uttara\nPress 3 for Dhanmondi");
        printf("\nEnter your choice:");
        scanf("%d",&d);
        switch(d){
            case 1:
 printf("To travel to Gulshan from Puran Dhaka it will cost %.2f",price_10);

            printf("\nFor what time do you want to book a taxi?");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again:");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_10*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_10*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_10*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chose a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_10);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_10*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_10*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_10*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_10*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
           printf("\n\nYour order has been placed, a taxi would be waiting for you at Puran dhaka station at %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to C:/online taxi ordering service.txt\n\n");
            break;
case 2:
            printf("To travel to Uttara from Puran Dhaka it will cost %.2f",price_11);
             printf("\nFor what time do you want to book a taxi? ");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
        printf("\n\n\nHow many people are you traveling with?");
    scanf("%d",&a.hp);

    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again:");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_11*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_11*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_11*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_11);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_11*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_11*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_11*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_11*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at B station %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/Online taxi ordering system.\n\n");
            break;

        case 3:
            printf("To travel to Dhanmondi from Puran dhaka it will cost %.2f",price_12);
            printf("\nFor what time do you want to book a taxi? ");
            printf("\nHour:");scanf("%d", &p);printf("Minute :");scanf("%d", &q);
            printf("\nPress a for AM or Press p for PM\n");
            printf("AM or PM :");
            do {ch = getchar();
            }while(ch!='a' && ch!='p' );printf("\n");
            switch(ch)
    {
        case 'a' : printf("AM");
        break;
        case 'p' : printf("PM");
        break;
    }
    if(a.hp>8){
        for(a.hp=1; ;a.hp++){
                printf("\nHow many people are you traveling with?");
                printf("Enter your choice again:");
                scanf("%d",&a.hp);
                if(a.hp<8)break;

        }
    }

    if(a.hp>4){
        printf("\nWe recommend you to choose a large car.\nYour options are :\n                  1.van\n                  2.SUV\n                  3.mini van\n                  \n Enter your choice:");
        scanf("%d", &n);
        if(n>3){
                for(i=1;i=10;i++){
                    printf("\nInvalid input!!! Please choose between 1, 2 or 3.");
                    printf("Enter your choice again:");
                    scanf("%d",&n);
                    if(n<4){break;}
                }

        }

        if(n==1){printf("You have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_12*rate_van;
        printf("Your total cost will be %.2f",sum);


        }
        else if(n==2){printf("\n\n                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_12*rate_suv;
                      printf("Your cost will be %.2f",sum);

        }
        else if(n==3){printf("\n\n                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_12*rate_mvan;
                      printf("Your total cost will be %.2f",sum);
        }



    }
    else if(a.hp<5){
            printf("\nChoose the type of car you would like:\n                    1.Private car\n                    2.Premium cars\n                    3.van\n                    4.SUV\n                    5.mini van\n");
            printf("                    Enter your choice: ");
            scanf("%d", &c);

            if(c>5){
                for(j=1;j<10;j++){
                    printf("\nInvalid input!!! Please choose between 1, 2, 3, 4 or 5.");
                    printf("Enter your choice again:");
                    scanf("%d",&c);
                    if(c<5){break;}
                }

        }


             if(c==1){printf("                    \nYou have chosen a private car\nNo additional cost required for this vehicle");
             printf("\nTotal cost is: %.2f",price_12);
             }
            else if(c==2){printf("                    \nYou have chosen a premium car\n10 percent will be added to your cost");
            sum = sum+price_12*rate_pcar;
            printf("\nTotal cost is:%.2f",sum);
            }
            else if(c==3){printf("                    \nYou have chosen a van.\n8 percent will be added to your cost.\n");
        sum = sum+price_12*rate_van;
        printf("Your total cost will be %.2f",sum);
            }
            else if(c==4){printf("                    \nYou have chosen a SUV\n6 percent will be added to your cost.\n");
        sum = sum+price_12*rate_suv;
                      printf("Your cost will be %.2f",sum);
            }
            else if(c==5){printf("                    \nYou have chosen a mini van.\n3 percent will be added to your cost.\n");
        sum = sum+price_12*rate_mvan;
                      printf("Your total cost will be %.2f",sum);}
            else printf("Invalid input!!!");}
            printf("\n\nYour order has been placed, a taxi would be waiting for you at Puran Dhaka station %d : %d. \n\n", p,q);
    printf("\n\nTo check your info go to D:/Online taxi ordering system.\n\n");

            break;
}
}

getch();
return 0;
}















