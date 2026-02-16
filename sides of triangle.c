#include <stdio.h>

int main() {
    float side1, side2, side3;

    // Input side lengths from the user
    printf("Enter the three sides of the triangle: \n");
    scanf("%f %f %f", &side1, &side2, &side3);

    // First, check if the sides can actually form a triangle
    // (The sum of any two sides must be greater than the third)
    if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)) {
        
        if (side1 == side2 && side2 == side3) {
            // All sides are equal
            printf("It is an Equilateral triangle.\n");
        } 
        else if (side1 == side2 || side2 == side3 || side1 == side3) {
            // At least two sides are equal
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            // No sides are equal
            printf("It is a Scalene triangle.\n");
        }
        
    } else {
        printf("These sides do not form a valid triangle.\n");
    }

    return 0;
}
