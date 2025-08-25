/*  M >= 75 -> Distinction
    M >= 60 -> 1st class
    M >= 50 -> Passed
    M < 55 -> fail
    Range => 0 to 100 */
#include <stdio.h>

int main() {
    int marks;
    printf("Enter your marks");
    scanf("%d", &marks);

    if(50 <= marks <= 100) {
        if(marks >= 90) {
            printf("Congratulations, you can get a scholarship");
        }
        else {
            printf("You've passed");
        }
    }
    else {
        printf("Sorry, you're failed");
    }
    
    return 0;
}
