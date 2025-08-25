/* Find out the largest number from given three number using if-else*/
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter the numbers");
    scanf("%d%d%d", &a, &b, &c);
    if(a>b && a>c) {
        printf("Number a = %d is greatest", a);
    }
    else if(b>a && b>c) {
        printf("NUmber b = %d is greatest", b);
    }
    else {
        printf("Number c = %d is greatest", c);
    }
    
    return 0;
}