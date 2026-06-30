// Write a program to Create menu-driven string operations system.

#include <stdio.h>
#include <string.h>

int main(){
    char a[100], b[100];
    int button=0;

    while(button != 7){
        printf("Menu:\n To Input String, Press 1\n To Find Length, Press 2\n To Reverse, Press 3\n To Convert to Uppercase, Press 4\n To Convert to Lowercase, Press 5\n To Concatenate, Press 6\n To Exit, Press 7\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            printf("Enter a string: ");
            getchar();
            fgets(a, sizeof(a), stdin);
            int len = strlen(a);
            if(a[len-1] == '\n') a[len-1] = '\0';
            printf("String stored successfully!\n");
        }
        if(button == 2){
            printf("Length: %d\n", (int)strlen(a));
        }
        if(button == 3){
            int len = strlen(a);
            char rev[100];
            for(int i=0; i<len; i++) rev[i] = a[len-1-i];
            rev[len] = '\0';
            printf("Reversed: %s\n", rev);
        }
        if(button == 4){
            char upper[100];
            for(int i=0; a[i] != '\0'; i++){
                if(a[i] >= 'a' && a[i] <= 'z') upper[i] = a[i] - 32;
                else upper[i] = a[i];
            }
            upper[strlen(a)] = '\0';
            printf("Uppercase: %s\n", upper);
        }
        if(button == 5){
            char lower[100];
            for(int i=0; a[i] != '\0'; i++){
                if(a[i] >= 'A' && a[i] <= 'Z') lower[i] = a[i] + 32;
                else lower[i] = a[i];
            }
            lower[strlen(a)] = '\0';
            printf("Lowercase: %s\n", lower);
        }
        if(button == 6){
            printf("Enter a string to concatenate: ");
            getchar();
            fgets(b, sizeof(b), stdin);
            int len = strlen(b);
            if(b[len-1] == '\n') b[len-1] = '\0';
            strcat(a, b);
            printf("Concatenated: %s\n", a);
        }
    }
}