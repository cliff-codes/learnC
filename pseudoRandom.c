#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){

    // Pseudo-random 

    //seed value based on the current time
    srand(time(NULL));

    // to generate values btn two intgers 
    int min = 1;
    int max = 6;

    int randomNum = (rand() % (max - min + 1)) + min;

    printf("%d", randomNum);

    // printf("%d", rand());

    return 0;
}