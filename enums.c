#include <stdio.h>

typedef enum{
    SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY
} Day;

int main(){
    Day today = FRIDAY; 

    printf("%d ", today);
    return 0;
}