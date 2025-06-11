#include <stdio.h>
#include <unistd.h>

int main(){

    //count to 10;

    for(int i = 1; i <= 10; i++){
        sleep(1);
        printf("%d\n", i);
    }

    return 0;
}