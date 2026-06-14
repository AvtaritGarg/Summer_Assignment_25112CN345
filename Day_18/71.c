// Write a program to Binary search. 

#include <stdio.h>

int main(){
    int n,i,j,a[50],min,max,mid,key,location = -1;

    printf("Enter the number of elements of the sorted array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ",i);
        scanf("%d", &a[i]);
    }

    printf("Enter an element to search it in the array: ");
    scanf("%d", &key);

    min = 0;
    max = n;

    for(i=0;i<n;i++){
        mid = (min + max) / 2;
        if(key == a[mid]){
           location = mid;
           break;
        } 
        else if(key<a[mid]) max = mid - 1;
        else if(key>a[mid]) min = mid + 1;
    }


    if(location == -1) printf("Element not found in the array.\n");
    else printf("The element is found at %d position", location+1);
}