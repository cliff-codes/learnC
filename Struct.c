#include <stdio.h>
#include <stdbool.h>

typedef struct { 
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

struct Player {
    char name[30];
    bool isSuperHero;
};



int main(){

    Student stduent1 = {"Cliff-codes", 23, 3.7, true};

    printf("%s\n", stduent1.name);
    printf("%d\n", stduent1.age);
    printf("%.2f\n", stduent1.gpa);
    printf("%s\n", (stduent1.isFullTime) ? "Yes" : "No");

    struct Player playerOne ={ "Cody", true };

    printf("PlayerOne: %s \n", playerOne.name);
    

    return 0;
}