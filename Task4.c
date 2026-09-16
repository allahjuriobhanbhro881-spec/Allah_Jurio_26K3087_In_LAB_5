
 #include <stdio.h>

int main() {
    int marks;

    printf("enter marks of student: ");
    scanf("%d", &marks);

    (marks >= 50) ? printf("pass\n") : printf("fail\n");

    return 0;
}