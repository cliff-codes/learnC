#include <stdio.h>

typedef struct 
{
    char model[25];
    int year;
    int price;
} Car;


int main(){

    Car cars[] = {
        {"Mustang", 2025, 32000},
        {"Camero", 2026, 68000}
    };

    for(int i = 0; i < sizeof(cars)/ sizeof(cars[0]); i++){
        printf("%s %d $%d \n", cars[i].model, cars[i].year, cars[i].price);
    }


    return 0;
}