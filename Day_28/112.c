// Write a program to Create contact management system.

#include <stdio.h>
#include <string.h>

int main(){
    char name[50][100];
    long long phone[50];
    int n=3, button=0;

    strcpy(name[0], "Avtarit");
    strcpy(name[1], "Ayush");
    strcpy(name[2], "Yash");

    phone[0] = 9876543210;
    phone[1] = 8765432109;
    phone[2] = 7654321098;

    while(button != 4){
        printf("Menu:\n To Display Contacts, Press 1\n To Add a Contact, Press 2\n To Delete a Contact, Press 3\n To Exit, Press 4\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("\n%-5s %-20s %s\n", "No.", "Name", "Phone");
            printf("-----------------------------------\n");
            for(int i=0; i<n; i++){
                printf("%-5d %-20s %lld\n", i+1, name[i], phone[i]);
            }
            printf("\n");
        }
        if(button == 2){
            printf("Enter the name: ");
            getchar();
            fgets(name[n], sizeof(name[n]), stdin);
            int len = strlen(name[n]);
            if(name[n][len-1] == '\n') name[n][len-1] = '\0';
            printf("Enter the phone number: ");
            scanf("%lld", &phone[n]);
            n++;
            printf("Contact added successfully!\n");
        }
        if(button == 3){
            int idx;
            printf("Enter contact number to delete (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid contact!\n");
            else{
                for(int i=idx; i<n-1; i++){
                    strcpy(name[i], name[i+1]);
                    phone[i] = phone[i+1];
                }
                n--;
                printf("Contact deleted successfully!\n");
            }
        }
    }
}