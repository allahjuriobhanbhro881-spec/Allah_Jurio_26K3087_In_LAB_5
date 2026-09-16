#include <stdio.h>

int main(){

    // Task 3
     int department,section;
     printf("Enter department: 1 for Computer Science, 2 for Information Technology, 3 Artificial intelligence");
     scanf(" %d", &department);
     printf("Enter Section: 1 for section A, 2 for section B, 3 section C");
     scanf(" %d", &section);
 
     switch(department){
        case 1: 
          switch(section){
            case 1:
              printf("Computer Science , section A");
              break;
            case 2:
              printf("Computer Science , section B");
              break;
            case 3:
              printf("Computer Science , section C");
              break;
            default:
              break;     
          }
         break; 
        
        case 2:
          switch(section){
            case 1:
              printf("Information Technology , section A");
              break;
            case 2:
              printf("Information Technology , section B");
              break;
            case 3:
              printf("Information Technology , section C");
              break;
            default:
              break;     
          }
         break; 

        case 3:
          switch(section){
            case 1:
              printf("Artificial Intelligence , section A");
              break;
            case 2:
              printf("Artificial Intelligence , section B");
              break;
            case 3:
              printf("Artificial Intelligence , section C");
              break;
            default:
              break;     
          }
         break;  
     }
    return 0;
}

