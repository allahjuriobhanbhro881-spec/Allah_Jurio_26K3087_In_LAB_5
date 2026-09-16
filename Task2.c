#include <stdio.h>

int main(){

    // Task 2
    int cnic,test;
    
    printf("You have cnic : (1/0) 1 for yes, 0 for no");
    scanf(" %d", &cnic);
    printf("did you passed driving test : (1/0) 1 for yes, 0 for no");
    scanf(" %d", &test);
   
    if(cnic == 1){
       if(test == 1){
         printf("License can be issued");
       }
       else{
        printf("License can not be issued");
       }
    }

    return 0;
}

