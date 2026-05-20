#include <stdio.h>
int main(){
    int rows, spaces, stars;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    if(rows % 2 == 0){
        printf("Enter odd number of rows");
    }
    else{
        for(int i = 1; i <= (rows + 1)/2 ; i++){
            for(spaces = i; spaces <= (rows - 1)/2; spaces++){
                printf(" ");
            }
            for(stars = 1; stars <=2 * i - 1 ; stars++){
                printf("*");
            }
            printf("\n");
        }
        for(int i = 1; i <= (rows - 1)/2 ; i++){
            for(spaces = 1; spaces <= i ;spaces++){
                printf(" ");
            }
            for(stars = rows - 2; stars >= 2 * i - 1;stars--){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}