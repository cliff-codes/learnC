#include <stdio.h>
#include <string.h>

int main() {

    //shopping cart programm

    char item[50] = "";
    float price = 0.0f;
    int quantity = 0;
    char currency = '$';
    float total = 0.0f;

    printf("Whar items would you want to buy?: ");
    fgets(item, sizeof(item), stdin);
    item[strlen(item) - 1] = '\0';

    printf("What is the price of each?: ");
    scanf("%f", &price);

    printf("How many would you like?: ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("Total price for items in your cart is %c%.2f", currency, total);

    return 0;
}