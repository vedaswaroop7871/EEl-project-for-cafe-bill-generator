#include <stdio.h>

int main() {
    char name[50], address[100], date[100], time[100];
    int itemno[50], quantity[50], itemcount;
    char itemname[50][50];
    float price[50], total[50];
    float grandtotal = 0.0;

 // Customer details
    printf("Enter customer name: ");
    scanf("%s", name);

    printf("Enter customer address : ");
    scanf("%s", address);

    printf("Enter date (dd/mm/yyyy): ");
    scanf("%s", date);

    printf("Enter time (hh:mm): ");
    scanf("%s", time);


    printf("Enter number of items: ");
    scanf("%d", &itemcount);


    // Items input
    for (int i = 1; i <=itemcount; i++) {
        
        
        itemno[i]=i;
        printf("************\n");
         printf(" item number: %d\n",itemno[i]);
    
       

        printf("Enter item name:");
        scanf("%s", itemname[i]);

        printf("Enter quantity: ");
        scanf("%d", &quantity[i]);

        printf("Enter price: ");
        scanf("%f", &price[i]);

        total[i] = quantity[i] * price[i];
        grandtotal += total[i];
    }

    // Print bill
    printf("\n\n========================BILL========================\n");
    printf("Customer Name: %s\n", name);
    printf("Address      : %s\n", address);
    printf("Date         : %s\n", date);
    printf("Time         : %s\n", time);
    printf("---------------------------------------------------\n");
    printf("Item No | Item Name       | Qty | Price | Total\n");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < itemcount; i++) {
        printf("%7d | %15s | %3d | %1.2f | %f\n",
            itemno[i+1],
            itemname[i+1],
            quantity[i+1],
            price[i+1],
            total[i+1]);
    }

    printf("---------------------------------------------------\n");
    printf("Grand Total: %.2f\n", grandtotal);
    printf("===================================================\n");

    return 0;
}
