#include <stdio.h>

int main(){

    // Array of strings

    char fruits[][10] = {"Apple", "Banana", "Coconut", "Pineapple"};

    for (int i = 0; i < sizeof(fruits)/ sizeof(fruits[0]); i++)
    {
        printf("%s\n", fruits[i]);
    }
    

    return 0;
}