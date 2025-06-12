#include <stdio.h>
#include <string.h>

int main(){

    int numbers[] = { 10, 20, 30, 43, 67, 32 };
    char grades[] = { 'A', 'B', 'C', 'D', 'F' }; 
    printf("%d\n", numbers[4]);

    printf("%c \n", grades[4]);

    for(int i = 0; i < sizeof(numbers)/ sizeof(numbers[0]); i++){
        printf("%d ", numbers[i]);
    }

    return 0;
}