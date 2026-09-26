#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    // Input length and breadth
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);

    // Calculate area and perimeter
    area = length * breadth;
    perimeter = 2 * (length + breadth);

    // Display results
    printf("\n Area of Rectangle = %f \n", area);
    printf("Perimeter of Rectangle = %f \n", perimeter);

    return 0;
}
