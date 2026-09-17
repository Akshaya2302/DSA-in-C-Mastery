#include <stdio.h>

// This is TAKE NOTHING RETURN SOMETHING....
int multiply() {
    int a, b, product;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    
    product = a * b;
    return product;
}

int main() {
    int result = multiply();
    // Boss prints
    printf("Product is: %d\n", result);
    return 0;
}
