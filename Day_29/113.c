// Write a program to Create menu-driven calculator.

#include <stdio.h>

int main(){
    int button=0;
    float a, b;

    while(button != 5){
        printf("Menu:\n To Add, Press 1\n To Subtract, Press 2\n To Multiply, Press 3\n To Divide, Press 4\n To Exit, Press 5\n\n Enter: ");
        scanf("%d", &button);

        if(button >= 1 && button <= 4){
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        }

        if(button == 1) printf("Result: %.2f\n", a+b);
        else if(button == 2) printf("Result: %.2f\n", a-b);
        else if(button == 3) printf("Result: %.2f\n", a*b);
        else if(button == 4){
            if(b == 0) printf("Cannot divide by zero!\n");
            else printf("Result: %.2f\n", a/b);
        }
    }
}