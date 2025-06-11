#include <stdio.h>


int main() {

    int dayOfWeek = 3;

    switch (dayOfWeek)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("It's Monday");
        break;
    case 3:
        printf("It's Tueday");
        break;
    case 4:
        printf("It's wednesday");
        break;
    default:
        break;
    }

    return 0;
}