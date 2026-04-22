#include <stdio.h>
    int main(){
        int i, j, n, k;
        printf("Write No. of Rows: ");
        scanf("%d", &n);
        for(i = n; i>= 1; i--){
            for(j = i; j<= n-1; j++){
                printf(" ");
            }
            for(k=1;k<= 2 * i - 1; k++){ 
                printf("*");
            }
            printf("\n");
        }
        return 0;
    }