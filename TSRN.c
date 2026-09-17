#include <stdio.h>

// This is TAKE SOMETHING RETURN NOTHING...
void multiply(int a, int b)
{
    int product = a * b;
    printf("Product is: %d\n", product);
}

int main()
{
    int a, b;
  
    printf("Enter values of a and b: ");
    scanf("%d %d", &a, &b);
    
    multiply(a, b);
    return 0;
}
