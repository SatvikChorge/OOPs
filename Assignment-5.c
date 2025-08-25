#include <stdio.h>

int main() {
    int columns, rows;
    for(columns = 1; columns <= 10; columns++) {
        for(rows = 1; rows <= columns; rows++) {
            printf("%d", rows * 5);
        }
    
        int gap_between_triangles = (10 - columns) * 4, 
            space_between_patterns;

        for(space_between_patterns = 0; space_between_patterns < gap_between_triangles; space_between_patterns++) {
            printf(" ");
        }
        for(rows = columns; rows >= 1; rows--) {
            printf("%d", rows * 5);
        }
        printf("\n");
    }
    return 0;
}