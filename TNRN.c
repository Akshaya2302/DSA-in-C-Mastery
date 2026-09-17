#include <stdio.h>
// This is TAKE NOTHING RETURN NOTHING...
void multiply() {
    int a, b, product;
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    
    product = a * b;
    printf("Product is: %d\n", product);
}

int main() {
    multiply();
    return 0;
}
