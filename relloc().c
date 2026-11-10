#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int i;
    
    // 1. Allocate space for 3 numbers
    int *arr = (int *)malloc(3 * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    // 2. EXPAND it to hold 5 numbers using realloc!
    arr = (int *)realloc(arr, 5 * sizeof(int));

    // 3. Put numbers in the 2 new slots
    arr[3] = 40;
    arr[4] = 50;

    // 4. Print all 5 numbers
    printf("All 5 numbers after realloc:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
