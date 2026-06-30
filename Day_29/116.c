// Write a program to Create inventory management system.

#include <stdio.h>
#include <string.h>

int main(){
    char name[50][100];
    int quantity[50];
    float price[50];
    int n=3, button=0;

    strcpy(name[0], "Apple");
    strcpy(name[1], "Banana");
    strcpy(name[2], "Orange");

    quantity[0] = 100; price[0] = 1.50;
    quantity[1] = 200; price[1] = 0.50;
    quantity[2] = 150; price[2] = 2.00;

    while(button != 5){
        printf("Menu:\n To Display Items, Press 1\n To Add an Item, Press 2\n To Update Quantity, Press 3\n To Delete an Item, Press 4\n To Exit, Press 5\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("\n%-5s %-20s %-10s %s\n", "No.", "Name", "Quantity", "Price");
            printf("-----------------------------------------------\n");
            for(int i=0; i<n; i++){
                printf("%-5d %-20s %-10d %.2f\n", i+1, name[i], quantity[i], price[i]);
            }
            printf("\n");
        }
        if(button == 2){
            printf("Enter the name: ");
            getchar();
            fgets(name[n], sizeof(name[n]), stdin);
            int len = strlen(name[n]);
            if(name[n][len-1] == '\n') name[n][len-1] = '\0';
            printf("Enter the quantity: ");
            scanf("%d", &quantity[n]);
            printf("Enter the price: ");
            scanf("%f", &price[n]);
            n++;
            printf("Item added successfully!\n");
        }
        if(button == 3){
            int idx;
            printf("Enter item number to update (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid item!\n");
            else{
                printf("Enter new quantity: ");
                scanf("%d", &quantity[idx]);
                printf("Quantity updated successfully!\n");
            }
        }
        if(button == 4){
            int idx;
            printf("Enter item number to delete (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid item!\n");
            else{
                for(int i=idx; i<n-1; i++){
                    strcpy(name[i], name[i+1]);
                    quantity[i] = quantity[i+1];
                    price[i] = price[i+1];
                }
                n--;
                printf("Item deleted successfully!\n");
            }
        }
    }
}