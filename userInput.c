#include <stdio.h>
#include <string.h>

int main(){

    int age = 0;
    float gpa = 0.0f;
    char grade = 'c';
    grade = '\0'; // null terminator
    char name[30] = "";

    // taking inputs
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your fullname name: ");
    //scanf will stop reading after it encounters an empty space
    // scanf("%s", name); 
    getchar(); //clears the new line buffer
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; //clearing the last character in the string array since fgets reads the enter key as a character when used to submit an input
    

    printf("%s\n", name);
    printf("Your age is %d\n", age );
    printf("Your gpa is: %.2f\n", gpa);
    printf("%c\n", grade);

    return 0;
}