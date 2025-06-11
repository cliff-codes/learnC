#include <stdio.h>
#include <string.h>

void happyBirthday(char name[], int age){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you! %s", name);
    printf("\nYou are %d years old now", age);
}

int main(){

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';
    
    printf("enter you age: ");
    scanf("%d", &age);

    happyBirthday(name, age);
    // happyBirthday();
    return 0;
}