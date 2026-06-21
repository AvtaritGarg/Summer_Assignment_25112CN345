// Write a program to Check string rotation. 

#include <stdio.h>
#include <string.h>

int main(){
    int i,j,n1,n2,rotation;
    char a1[100],a2[100],b[200];

    printf("Enter a string: ");
    fgets(a1, sizeof(a1), stdin);

    for(n1=0;n1<100;n1++){
        if(a1[n1] == '\n'){
            a1[n1] = '\0';
            break;
        }
    }

    printf("Enter a string: ");
    fgets(a2, sizeof(a2), stdin);


    for(n2=0;n2<100;n2++){
        if(a2[n2] == '\n'){
            a2[n2] = '\0';
            break;
        }
    }

    if (n1==n2){
        for(i=0;i<2*n1;i++){
            if(i<n1) b[i] = a1[i];
            else b[i] = a1[i-n1];
        }
        b[2*n1] = '\0';

        char *result = strstr(b, a2);

        if(result == NULL) printf("Not a rotation\n");
        else printf("Is a rotation\n");
    }
    else printf("Not a rotation\n");
    
}