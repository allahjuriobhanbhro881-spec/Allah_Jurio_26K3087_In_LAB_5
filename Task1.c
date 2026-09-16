#include <stdio.h>

int main(){

    // Task 1
    int age;
    float marks;
    printf("Enter your age: ");
    scanf(" %d", &age);
    printf("Enter your marks: ");
    scanf(" %f", &marks);

    if(age >= 18){
        if(marks >= 50){
            printf("elligible for admission! ");
        }
        else{
             printf("inelligible for admission! "); 
        }
    }


    return 0;
}

