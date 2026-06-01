// Write a program to Print Armstrong numbers in a range.

#include <stdio.h>
#include <math.h>

int main(){

    int ll,ul,i,n,arm,power;

    printf("Enter a range to check for Armstrong numbers lying in that range: \n");
    printf("Enter the lower limit of the range: ");
    scanf("%d", &ll);
    printf("Enter the upper limit of the range: ");
    scanf("%d", &ul);

    for(n=ll; n<=ul; n++){
        arm=0;
        power=0;

        for(i=n;i>0;i=i/10){
            power++;
        }
        for(i=n;i>0;i=i/10){
            arm = arm + pow(i%10, power);
        }
        if(arm == n) printf("%d  ", n);

    }
}