// Write a program to Create menu-driven array operations system.

#include <stdio.h>

int main(){
    int a[100], n=0, button=0;

    while(button != 6){
        printf("Menu:\n To Add Elements, Press 1\n To Display Elements, Press 2\n To Find Max/Min, Press 3\n To Calculate Sum & Average, Press 4\n To Sort Array, Press 5\n To Exit, Press 6\n\n Enter: ");
        scanf("%d", &button);

        if(button == 1){
            int count;
            printf("How many elements to add: ");
            scanf("%d", &count);
            for(int i=0; i<count; i++){
                printf("Enter element %d: ", n+1);
                scanf("%d", &a[n]);
                n++;
            }
            printf("Elements added successfully!\n");
        }
        if(button == 2){
            if(n == 0) printf("Array is empty!\n");
            else{
                printf("Array: ");
                for(int i=0; i<n; i++){
                    printf("%d", a[i]);
                    if(i != n-1) printf(", ");
                }
                printf("\n");
            }
        }
        if(button == 3){
            if(n == 0) printf("Array is empty!\n");
            else{
                int max=a[0], min=a[0];
                for(int i=1; i<n; i++){
                    if(a[i] > max) max = a[i];
                    if(a[i] < min) min = a[i];
                }
                printf("Max: %d, Min: %d\n", max, min);
            }
        }
        if(button == 4){
            if(n == 0) printf("Array is empty!\n");
            else{
                int sum=0;
                for(int i=0; i<n; i++) sum += a[i];
                printf("Sum: %d, Average: %.2f\n", sum, (float)sum/n);
            }
        }
        if(button == 5){
            if(n == 0) printf("Array is empty!\n");
            else{
                for(int i=0; i<n; i++){
                    for(int j=0; j<n-i-1; j++){
                        if(a[j] > a[j+1]){
                            int temp = a[j];
                            a[j] = a[j+1];
                            a[j+1] = temp;
                        }
                    }
                }
                printf("Array sorted successfully!\n");
            }
        }
    }
}