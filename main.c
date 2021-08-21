/*
C Program
Program Name- Menu ordering system.
Made by- Mitul Tiwari
E-mail= mitultiwari35@gmail.com
Unschool Minor Project
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1. q(1 to 10)- To sotre quantity of each menu item
    2. p- To operate Main Menu switch.
    3. i- To operate Food Menu switch.
    4. name- To store name.
    5. m- For loop condition to order more item.
    */
    int m=0,p=0,i=0,q1=0,q2=0,q3=0,q4=0,q5=0,q6=0,q7=0,q8=0,q9=0,q10=0;
    char name[10];
    printf("Please enter your name\n");
    gets(name);
    printf("Hi %s Welcome to cafe Matcha",name);
    top: //This is to mark the top for 'goto' function so that the program doesnt close after placing order.
    puts("                                                  Cafe Matcha Food odering OS ");
    puts("                                                  1.  Menu");
    puts("                                                  2.  Status");
    puts("                                                  3.  Records");
    puts("                                                  4.  Quit\n\n");
    printf("%s Please choose from the above number\n",name);
    scanf("%d",&p);
    fmtop://This is to mark the top of food menu for 'goto' function if the customer wants to order more.
    switch(p){ //This switch operates all the 4 main menu options.
        case 1:{

    puts("                                   _________________________________________________________________________");
    puts("                                                     Cafe Matcha Food & Beverages Menu");
    puts("                                   _________________________________________________________________________");
    puts("                                   | S.no |        Item           |   Code    |  Serving Size  |   Price  |");
    puts("                                   |______|_______________________|___________|________________|__________|");
    puts("                                   |      |   Breakfast           |           |                |          |");
    puts("                                   |  1.  |   French Toast        |     1     |     250gram    |   349Rs  |");
    puts("                                   |  2.  |   Pancakes Platter    |     2     |     200gram    |   399Rs  |");
    puts("                                   |  3.  |   B.L.T Sandwich      |     3     |     280gram    |   299Rs  |");
    puts("                                   |      |   Lunch & Dinner      |           |                |          |");
    puts("                                   |______|_______________________|___________|________________|__________|");
    puts("                                   |  1.  |   Fettuccine-Alfredo  |     4     |     300gram    |   449Rs  |");
    puts("                                   |  2.  |   Burger Meal         |     5     |     350gram    |   499Rs  |");
    puts("                                   |  3.  |   Meatloaf            |     6     |     330gram    |   599Rs  |");
    puts("                                   |  4.  |   Ceaser Salad        |     7     |     485gram    |   799Rs  |");
    puts("                                   |______|_______________________|___________|________________|__________|");
    puts("                                   |      |   Beverages           |           |                |          |");
    puts("                                   |      |                       |           |                |          |");
    puts("                                   |  1.  |   Hot Chocolates      |     8     |     200ml      |   199Rs  |");
    puts("                                   |  2.  |   Matcha Tea          |     9     |     225ml      |   249Rs  |");
    puts("                                   |  3.  |   Energy Drink        |     10    |     150ml      |   110Rs  |");
    puts("                                   |______|_______________________|___________|________________|__________|");
    printf("%s Please enter the code for the item u wanna order\n",name);
    scanf("%d",&i);
    switch(i) //This switch operates under switch(p) case1 to take input and store the customer's order.
    {

        case 1: //Menu item 1
            {
                printf("%s Please enter quantity for French Toast SERVING-SIZE=250gram Price-349Rs\n",name);
                scanf("%d",&q1);
                printf("%d French Toast. Total Cost- %d",q1,q1*349);
                break;
            }

        case 2: //Menu item 2
            {
              printf("%s Please enter quantity for Pancake Platter SERVING-SIZE=200gram Price-399Rs\n",name);
                scanf("%d",&q2);
                printf("%d Pancake Platter. Total Cost- %d",q2,q2*399);

                break;

            }
        case 3: //Menu item 3
            {
                printf("%s Please enter quantity for B.L.T Sandwich SERVING-SIZE=280gram Price-299Rs\n,",name);
                scanf("%d",&q3);
                printf("%d B.L.T. Sandwich Total Cost- %d",q3,q3*299);

                break;
            }
        case 4: //Menu item 4
            {
                printf("%s Please enter quantity for Fettuccine-Alfredo SERVING-SIZE=300gram Price-449Rs\n",name);
                scanf("%d",&q4);
                printf("%d Fettuccine-Alfredo. Total Cost- %d",q4,q4*449);

                break;
            }
        case 5: //Menu item 5
            {
                printf("%s Please enter quantity for Burger Meal SERVING-SIZE=350gram Price-499Rs\n",name);
                scanf("%d",&q5);
                printf("%d Burger Meal. Total Cost- %d",q5,q5*499);

                break;
            }
        case 6: //Menu item 6
            {
                printf("%s Please enter quantity for Meatloaf SERVING-SIZE=330gram Price-599Rs\n",name);
                scanf("%d",&q6);
                printf("%d Meatloaf. Total Cost- %d",q6,q6*599);

                break;
            }
        case 7: //Menu item 7
            {
                printf("%s Please enter quantity for Ceaser Salad SERVING-SIZE=485gram Price-799Rs\n",name);
                scanf("%d",&q7);
                printf("%d Ceaser Salad. Total Cost- %d",q7,q7*799);

                break;
            }
        case 8: //Menu item 8
            {
                printf("%s Please enter quantity for Hot Chocolates SERVING-SIZE=200ml Price-199Rs\n",name);
                scanf("%d",&q8);
                printf("%d Hot Chocolates. Total Cost- %d",q8,q8*199);

                break;
            }
        case 9: //Menu item 9
            {
                printf("%s Please enter quantity for Matcha Tea SERVING-SIZE=225ml Price-249Rs\n",name);
                scanf("%d",&q9);
                printf("%d Matcha Tea. Total Cost- %d",q9,q9*249);

                break;
            }

        case 10: //Menu item 10
            {
                printf("%s Please enter quantity for Energy Drink SERVING-SIZE=150ml Price-110Rs\n",name);
                scanf("%d",&q10);
                printf("%d Energy Drink. Total Cost- %d",q10,q10*110);
                break;
            }
    }
    printf("\n %s Do u want to order anything else?\n YES-Enter 1\n No Enter 0\n",name);
    scanf("%d",&m);
    if(m==1) //This is the loop for asking if the customer wants to order more.
        {
            goto fmtop;
        }
        printf("%s Your order has been placed.Please wait while we prepare your food.\n",name);
        goto top; //This prevents the program from ending after the order is being placed.
        }

    case 2: //This case shows the 'Status' of the order.
        {
            printf("%s Hello your order is being served thanks for your paitence\n",name);
            goto top;
        }
    case 3: // This case shows the 'Records' of the all the menu items.
        {
            printf("Here is the list of items ordered order:\n");
            printf("| S.no |        Item           |   Code    | Numer Of Orders  |\n");
            printf("|  1.  |   French Toast        |     1     |    %d Plates.    |\n",q1);
            printf("|  2.  |   Pancakes Platter    |     2     |    %d Plates.    |\n",q2);
            printf("|  3.  |   B.L.T Sandwich      |     3     |    %d Plates.    |\n",q3);
            printf("|  4.  |   Fettuccine-Alfredo  |     4     |    %d Plates.    |\n",q4);
            printf("|  5.  |   Burger Meal         |     5     |    %d Plates.    |\n",q5);
            printf("|  6.  |   Meatloaf            |     6     |    %d Plates.    |\n",q6);
            printf("|  7.  |   Ceaser Salad        |     7     |    %d Plates.    |\n",q7);
            printf("|  8.  |   Hot Chocolates      |     8     |    %d Cups       |\n",q8);
            printf("|  9.  |   Matcha Tea          |     9     |    %d Glasses    |\n",q9);
            printf("|  10. |   Energy Drink        |     10    |    %d Cans       |\n",q10);
            goto top;
        }
    case 4: // This case is to end the program
        {
            printf("Press any key to Exit.\nThank You!!");
            break;
        }
    }
    return 0;
}

