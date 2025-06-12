#include <stdio.h>

int main(){

    int numbers[][3] = {{1,2,9}, {3,4}, {5,6}};

    printf("%d ", numbers[0][0]);
    printf("%d ", numbers[0][1]);
    printf("%d ", numbers[0][2]);

    //printing all values
    for(int i = 0; i<sizeof(numbers) / sizeof(numbers[0]); i++){
        for(int j = 0; j < sizeof(numbers[i])/sizeof(numbers[i][j]); j++){
            if(numbers[i][j]){
                printf("%d ", numbers[i][j]);
            }
        }
    };

    return 0;
}