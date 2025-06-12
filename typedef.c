#include <stdio.h>

typedef int Number;
typedef char String[50];

int main(){

    // typedef : is a reserved keyword that gives an existing datatype a "nickname". It helps simplify complex types and improves code readablity.

    // typedef existing_type new_name;

    Number x = 3;
    Number y = 7;
    Number z = x + y;

    printf("%d ", z);
    //creating our own String
    String name = "Clifford";
    printf("Name: %s ", name);


    return 0;
}