#include <stdio.h>
#include <string.h>
int main(){
    int size, Quantity, A, C, Cheese, time, StdntID, Deliver,hours, minutes;
    float Total;
    char sizee[50];
    char crust[50];
    char Cheesee[50];
    printf("Enter the size of the Pizza you want to order.\n1. Small (1)\n2. Medium (2) \n3. Large (3)\n");
    scanf("%d", &size);
    switch (size){
        case 1 :{
            printf("\nA Small Pizza costs $8\nHow many you want?\n");
            scanf("%d", &Quantity);
            if (Quantity==1 && Quantity>0){
                printf("Your Total is $8\n");}
            else if (Quantity>1) {
                printf("\nCheck Our Multi-Pizza Deals\n2 pizzas cost $15, and 3 pizzas cost $21.\nHow many you want?\n");
                scanf("%d", &A);
                Total=(8*A)-(A-1);}
                strcpy(sizee, "Small");
            }
            break ;
        case 2 :{
            printf("\nA Medium Pizza costs 12$\nHow many you want?\n");
            scanf("%d", &Quantity);
            if (Quantity==1 && Quantity>0){
                printf("Your Total is 12$\n");}
            else if (Quantity>1) {
                printf("\nCheck Our Multi-Pizza Deals\n2 pizzas cost $22, and 3 pizzas cost $33.\nHow many you want?\n");
                scanf("%d", &A);
                Total=A*11;}
                strcpy(sizee, "Medium");
            }
            break ;
        case 3 :{
            printf("\nA Large Pizza costs 16$\nHow many you want?\n");
            scanf("%d", &Quantity);
            if (Quantity==1 && Quantity>0){
                printf("Your Total is 16$\n");}
            else if (Quantity>1) {
                printf("\nCheck Our Multi-Pizza Deals\n2 pizzas cost $28, and 3 pizzas cost $42.\nHow many you want?\n");
                scanf("%d", &A);
                Total=A*14;}
                strcpy(sizee, "Large");
            } 
            break ;
        default : 
        printf("Invalid Input");
        return 0;
    }
        { 
        printf("\nIf any Crust type you want?\nRegular Crust=$0 (1)\nThin Crust=$1 (2)\nStuffed Crust=$2 (3)?\n ");
        scanf("%d", &C);
           if (C==1){
           Total+=0;
           strcpy(crust, "Regular");
           }
           else if (C==2){
            Total+=1;
            strcpy(crust, "Thin Crust");
           }
            else if (C==3){
            Total+=2;
            strcpy(crust, "Stuffed Crust");
            }
            else 
            Total+=0;
        }
        {
            printf("\nDo you want Extra Cheese?\nYes (1)\nNO (0)\n");
            scanf("%d", &Cheese);
            if (Cheese==1){
            Total+=1.5;
            strcpy(Cheesee, "Extra Cheese");
            }
            else if (Cheese==0){
            Total+=0;
            strcpy(Cheesee, "No Extra Cheese");
            }
        }
        {
            printf("\nWhat time is it?  (HH:MM)  (IN 24H FORMAT)\n");
            printf("Enter the hours:");
            scanf("%d:", &hours);
            printf("Enter the minutes: ");
            scanf("%d", &minutes);
            printf("%d:%d is the time\n", hours,minutes);
            if (hours>=11 && hours<=14)
            Total-=Total*0.1;
            else
            Total+=0;
        }
        {
        printf("\nDo you have a Student ID?\nYes (1)\nNO (0)\n");
        scanf("%d", &StdntID);
            if (StdntID==1)
            Total-=2*Quantity;
            else if(StdntID==0);
            Total+0;
        }
        {
            if (Quantity>3 && C==3)
            printf("\nYou will get FREE GARLIC BREAD!\n");
        }
        {
            printf("\nDo You want it to be Delivered to you or want to pickup?\nDeliver it (1),\nPickup (2)\n");
            scanf("%d", &Deliver);
            if (Deliver==1)
            Total+=3;
            else 
            Total+=0;
        } 
    printf("\n%d %s Pizza's will cost you %.2f$ with %s and %s.\n", Quantity, sizee, Total, crust, Cheesee);
    printf("Order placed at %d:%d", hours, minutes);
return 0;
}