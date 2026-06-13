//Write a program to Find pair with given sum. 

#include <stdio.h>

int main(){
    int n,i,j,k=0,a[50],key;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d",&a[i]);
    }

    printf("Enter a sum to find a pair with that sum: ");
    scanf("%d", &key);

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(key == a[i] + a[j]){
                if(!k){
                    printf("Pairs: \n(%d, %d)", a[i], a[j]);
                    k++;
                } else printf(", (%d, %d)", a[i], a[j]);
            }
        }
    }

    if(!k) printf("No pairs found.\n");
}