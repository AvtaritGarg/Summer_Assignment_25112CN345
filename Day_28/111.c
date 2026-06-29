// Write a program to Create ticket booking system.

#include <stdio.h>
#include <string.h>

int main(){
    char events[50][100];
    int total[50], available[50], n=3, button=0;

    strcpy(events[0], "Concert");
    strcpy(events[1], "Football Match");
    strcpy(events[2], "Movie Night");

    total[0] = 100; available[0] = 100;
    total[1] = 200; available[1] = 200;
    total[2] = 50;  available[2] = 50;

    while(button != 4){
        printf("Menu:\n To Display Events, Press 1\n To Book a Ticket, Press 2\n To Cancel a Ticket, Press 3\n To Exit, Press 4\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("\n%-5s %-20s %-10s %s\n", "No.", "Event", "Total", "Available");
            printf("-----------------------------------------------\n");
            for(int i=0; i<n; i++){
                printf("%-5d %-20s %-10d %d\n", i+1, events[i], total[i], available[i]);
            }
            printf("\n");
        }
        if(button == 2){
            int idx, tickets;
            printf("Enter event number to book (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid event!\n");
            else if(available[idx] == 0) printf("No seats available!\n");
            else{
                printf("Enter number of tickets to book: ");
                scanf("%d", &tickets);
                if(tickets <= 0) printf("Invalid number!\n");
                else if(tickets > available[idx]) printf("Not enough seats! Only %d available.\n", available[idx]);
                else{
                    available[idx] -= tickets;
                    printf("Booked %d ticket(s) for %s. Remaining seats: %d\n", tickets, events[idx], available[idx]);
                }
            }
        }
        if(button == 3){
            int idx, tickets;
            printf("Enter event number to cancel (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid event!\n");
            else{
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &tickets);
                if(tickets <= 0) printf("Invalid number!\n");
                else if(available[idx] + tickets > total[idx]) printf("Cannot cancel more than booked!\n");
                else{
                    available[idx] += tickets;
                    printf("Cancelled %d ticket(s) for %s. Remaining seats: %d\n", tickets, events[idx], available[idx]);
                }
            }
        }
    }
}