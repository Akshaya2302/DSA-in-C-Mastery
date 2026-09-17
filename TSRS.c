#include <stdio.h>

// This is TAKE SOMETHING RETURN SOMETHING...
int multiply(int a, int b) {
    int product = a * b;
    return product;
}

int main() {
    int a, b, result;
    // Boss does scanf and printf
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    
    result = multiply(a, b);
    printf("Product is: %d\n", result);
    
    return 0;
}
