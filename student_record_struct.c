#include <stdio.h>

// 1. The Blueprint for a Student
struct Student {
    int roll;
    float marks;
};

int main() {
    // 2. Create Student 1 (s1) using that blueprint
    struct Student s1;

    // 3. Take input for s1 using the DOT (.) operator
    printf("Enter roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    // 4. Print s1's details
    printf("\n--- Student Record ---\n");
    printf("Roll Number: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
