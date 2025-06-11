#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    bool isStudent = false;

    char name[50] = "";

    if(isStudent){
        printf("You are a student!");
    }else{
        printf("You are not a student");
    }

    //checking for name;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) -1 ] = '\0';

    if(strlen(name) == 0){
        printf("You did not enter your name");
    }else{
        printf("Hello, %s", name);
    }

    return 0;
}

