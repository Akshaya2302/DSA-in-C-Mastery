#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n, i;
    int *arr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Calloc allocates AND initializes to 0!
//     calloc cleans every byte before giving to the user!!!
    arr = (int *)calloc(n, sizeof(int));

    printf("Values inside calloc memory:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
