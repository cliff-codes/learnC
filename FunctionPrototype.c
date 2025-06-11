#include <stdio.h>
#include <stdbool.h>
//function prototype: it provides the compiler with information about a function's name, return type, and parameters before its actual definition. Enables type checking and allows functions to be used before they're defined. It improves readability, organization, and helps prevent errors.

void hello(char name[], int age);
bool ageCheck(int age);

int main(){
    
    hello("Cliff-codes", 30);
    if(ageCheck(30)){
        printf("You are old enough to work anywhere");
    }else{
        printf("You cannot work at everyplace");
    }
    return 0;
}


//eg:
void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age){
    return age >= 16;
}