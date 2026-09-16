#include <stdio.h>

int main() {
    int A = 8;
    
    
    int left_result = A << 2;   
    int right_result = A >> 1;  

    printf("bitwise operations on A = 8\n\n");

    
    printf("left shift (A << 2):\n");
    printf("binary: 00001000 -> 00100000\n");
    printf("decimal result: %d\n\n", left_result);

    
    printf("right shift (A >> 1):\n");
    printf("binary: 00001000 -> 00000100\n");
    printf("decimal result: %d\n", right_result);

    return 0;
}
