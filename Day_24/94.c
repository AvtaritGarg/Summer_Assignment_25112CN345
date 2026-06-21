// Write a program to Compress a string. 

#include <stdio.h>
#include <string.h>

int main(){
    int n,i,j,k=0,count=1;
    char a[100],b[200];

    printf("Enter a string: ");
    fgets(a,sizeof(a), stdin);
    n = strlen(a);
    if (a[n-1] == '\n'){
        a[n-1] = '\0';
        n--;
    }

    for(i=0;i<n;i++){
        count = 49;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                count++;
            } else break;
        } 
        b[2*k] = a[i];
        b[2*k + 1] = count;
        k++;
        i=i+count -49;
    }

    b[2*k] = '\0';
    printf("%s", b);


}