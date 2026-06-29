// Write a program to Create library management system.

#include <stdio.h>
#include <string.h>

int main(){
    char books[50][100];
    int available[50], n=3, button=0;

    strcpy(books[0], "The Great Gatsby");
    strcpy(books[1], "To Kill a Mockingbird");
    strcpy(books[2], "1984");

    available[0] = 1;
    available[1] = 1;
    available[2] = 1;

    while(button != 5){
        printf("Menu:\n To Display Books, Press 1\n To Borrow a Book, Press 2\n To Return a Book, Press 3\n To Add a Book, Press 4\n To Exit, Press 5\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("\n%-5s %-30s %s\n", "No.", "Title", "Status");
            printf("-----------------------------------------------\n");
            for(int i=0; i<n; i++){
                printf("%-5d %-30s %s\n", i+1, books[i], available[i] ? "Available" : "Borrowed");
            }
            printf("\n");
        }
        if(button == 2){
            int idx;
            printf("Enter book number to borrow (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid book number!\n");
            else if(!available[idx]) printf("Book is already borrowed!\n");
            else{
                available[idx] = 0;
                printf("You have borrowed: %s\n", books[idx]);
            }
        }
        if(button == 3){
            int idx;
            printf("Enter book number to return (1 to %d): ", n);
            scanf("%d", &idx);
            idx--;
            if(idx < 0 || idx >= n) printf("Invalid book number!\n");
            else if(available[idx]) printf("Book was not borrowed!\n");
            else{
                available[idx] = 1;
                printf("You have returned: %s\n", books[idx]);
            }
        }
        if(button == 4){
            printf("Enter the title of the new book: ");
            getchar();
            fgets(books[n], sizeof(books[n]), stdin);
            int len = strlen(books[n]);
            if(books[n][len-1] == '\n') books[n][len-1] = '\0';
            available[n] = 1;
            n++;
            printf("Book added successfully!\n");
        }
    }
}