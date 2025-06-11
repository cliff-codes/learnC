
#include <stdio.h>


int main() {

    int age = 31;

    if (age < 18)
    {
        /* code */
        printf("You are a minor");
    }else if (age >= 18 && age <= 30)
    {
        /* code */
        printf("You are a young adult");
    }else{
        printf("You are an adult");
    }
    
    

    return 0;
}