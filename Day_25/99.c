#include <stdio.h>
#include <string.h>

int main(){
    int n, i, j;
    char a[100][100], temp[100];

    printf("Enter the number of names: ");
    scanf("%d", &n);
    getchar(); // consume newline

    for(i = 0; i < n; i++){
        printf("Enter name %d: ", i+1);
        fgets(a[i], sizeof(a[i]), stdin);
        int len = strlen(a[i]);
        if(a[i][len-1] == '\n'){
            a[i][len-1] = '\0';
        }
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(strcmp(a[j], a[j+1]) > 0){
                strcpy(temp, a[j]);
                strcpy(a[j], a[j+1]);
                strcpy(a[j+1], temp);
            }
        }
    }

    printf("Sorted names:\n");
    for(i = 0; i < n; i++){
        printf("%s\n", a[i]);
    }
}