#include <stdio.h>
#include <stdbool.h>

int main(){
    int age = 20;

    float cwa = 65.43;
    //this is a comment section
    // printf("Hello world \n");
    // printf("It's really good");

    printf("You are %d years old \n", age);
    printf("Your cwa is %.1f \n", cwa);

    //there are no strings in C so we use array of characters eg:
    char myName[] = "Simple Codes";
    char myEmail[] = "simplecodes@gmail.com";
    printf("My name is %s \n", myName);
    printf("My email is %s \n", myEmail);

    //booleans
    bool isOnline = 0;
    bool isRunning = 1;

    if(isOnline){
        printf("Your are online");
    }else {
        printf("you are ofline");
    }
    

    return 0;
}