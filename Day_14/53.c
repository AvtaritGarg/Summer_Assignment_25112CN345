// Write a program to Linear search. 

#include <stdio.h>

int main(){
    int n,a[50],key,loc=-1,i;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter the element to be seached from the array using linear search: ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        if(a[i]==key){
            loc = i;
            break;
        }
    }

    if(loc!=-1) printf("The element is found at position %d\n", loc + 1);
    else printf("Element not found. \n");
}