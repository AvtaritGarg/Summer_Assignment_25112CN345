// Write a program to Sort words by length. 

#include <stdio.h>
#include <string.h>

int main(){
    int n,i;
    char a[50][100];


    printf("Enter the number of words to input: ");
    scanf("%d", &n);
    getchar();

    for(i=0;i<n;i++){
            printf("Enter a string: ");
            fgets(a[i], sizeof(a[i]), stdin);
            int len = strlen(a[i]);
            if(a[i][len-1] == '\n'){
                a[i][len-1] = '\0';
            }
    }

    for(i=1;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(strlen(a[j]) > strlen(a[j+1])){
                int len = strlen(a[j]);
                for(int k = 0; k <= len; k++){
                    int temp = a[j][k];
                    a[j][k] = a[j+1][k];
                    a[j+1][k] = temp;
                }
            }
        }
    }


    printf("The sorted names are: \n");
    for(i=0;i<n;i++){
        printf("%s", a[i]);
        if(i!=n-1) printf(",\n");
    }

    printf("\n");

}