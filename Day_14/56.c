// Write a program to Find duplicates in array. 

#include <stdio.h>

int main(){
    int n,i,j,k=0,s,a[50],dup[50],alreadyAdded;

    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                alreadyAdded = 0;
                for(s=0;s<k;s++){
                    if(dup[s] == a[i]){
                        alreadyAdded++;
                        break;
                    }
                }
                if(!alreadyAdded){
                dup[k] = a[i];
                k++;
                }
            }
        }
    }
    if(k==0){
        printf("No duplicates");
    }
    else{
        printf("Duplicates: ");
        for(i=0;i<k;i++){
            printf("%d", dup[i]);
            if(i!=k-1) printf(", ");
        }
    }
}