// Write a program to Find LCM of two numbers. 

#include <stdio.h>

int main(){
    int n1,n2,lcm=0,i;

    printf("Enter the first number : ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    for(i=1;i<=n2;i++){
        if(((n1*i)%n2)==0) {
            lcm = n1*i;
            break;
        }
    }
    if (lcm == 0)
        printf("LCM could not be determined.\n");
    else
        printf("LCM of the given numbers is: %d\n", lcm);
}