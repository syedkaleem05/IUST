#include <stdio.h>
    int main(){
        int i, j, n, k;
        printf("Write No. of Rows");
        scanf("%d", &n);
        for(i = 1; i<=n; i++){
            for(j=1;j<=n; j++){
                printf(" ");
            }
            for(k=n;k<=n+1; k++){ 
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }