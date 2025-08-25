/*Print Table in following format:
5
5 10
5 10 15
:
:
...........
5 10 15 20 25 30 35 40 45 50 */
#include <stdio.h>
int main() {
    int i, j;
    printf("Multiplication Table Pattern  of 5:\n");
    for(i = 1; i <= 10; i++) {
        for(j = 1; j <= i; j++) {
            printf(" %d ", j * 5);
        }
        printf("\n");
    }

    return 0;
}