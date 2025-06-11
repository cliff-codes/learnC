#include <math.h>
#include <stdio.h>


int main(){

    int x = 9;
    float y = 3.14;

    // y = round(y);
    // y = log(y);
    // y = floor(y);
    int result = sqrt(x); //square root
    x = pow(x, 2);

    printf("%d\n", x);
    printf("%d\n", result);
    printf("%f\n", y);

    return 0;
}