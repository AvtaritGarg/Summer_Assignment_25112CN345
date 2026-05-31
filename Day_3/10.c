//Program to print prime numbers in a range.

#include <stdio.h>

int main(){
    int n1, n2,i,j,prime;

    
    printf("Enter the lower limit of the range: ");
    scanf("%d", &n1);

    printf("Enter the upper limit of the range: ");
    scanf("%d", &n2);

    if((n1>=1)&&(n2>n1))

    for(j=n1; j<=n2; j++){
        prime=0;
        if(j!=1){
        for(i=2;i<=j/2;i++){
            if(j%i==0) {
                prime++;
                break;
            }
        }
        if(prime == 0) printf("%d ", j);
        }
    }
    printf("\n");
}