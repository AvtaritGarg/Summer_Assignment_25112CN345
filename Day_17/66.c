// Write a program to Union of arrays. 

#include <stdio.h>

int main(){
    int n,m,i,j,k=0,a[50],b[50],c[100],alreadyExists=0;

    // Input first array
    printf("Enter the number of elements of first array: ");
    scanf("%d", &n);

    for(i=0;i<n;i++){
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    // Input second array
    printf("Enter the number of elements of the second array: ");
    scanf("%d", &m);

    for(i=0;i<m;i++){
        printf("Enter the value of b[%d]: ",i);
        scanf("%d", &b[i]);
    }


    for(i=0;i<n+m;i++){
        if(i<n){
            alreadyExists=0;
            for(j=0;j<k;j++){
                if(a[i] == c[j]) {
                    alreadyExists++;
                    break;
                }
            }
            if(!alreadyExists){
                c[k] = a[i]; 
                k++;
            }
        }
        else {
            
            alreadyExists=0;

            for(j=0;j<k;j++){
                if(b[i-n] == c[j]){
                    alreadyExists++;
                    break;
                } 
            }
            if(!alreadyExists){
                c[k] = b[i-n]; 
                k++;
            }
        }
    }


    printf("The union of the arrays is: { ");
    for(i=0;i<k;i++){
        printf("%d",c[i]);
        if(i!=k-1) printf(", ");
    }
    printf(" }\n");
}