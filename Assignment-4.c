#include <stdio.h>

int main() {
    int purchaseAmount;
    int discount = 0.0;
    
    printf("Enter the Amount:");
    scanf(" %d", &purchaseAmount);

    if(purchaseAmount >= 1000) {
        if(5000 <= purchaseAmount <= 10000) {
            discount = purchaseAmount * 0.1;
            printf("You've got 10 percent discount! = %dRs.\n", discount);
        }
        else if(purchaseAmount >= 10000) {
            discount = purchaseAmount * 0.15;
            printf("You've got 15 percent discount! = %dRs.\n", discount);
        }
        else {
            discount = purchaseAmount * 0.02;
            printf("You've got 2 percent discount! = %dRs.\n", discount);
        }
    }
    else {
        printf("You've got no discount!\n");
    }

    return 0;
    }