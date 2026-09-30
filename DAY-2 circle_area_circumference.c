#include <stdio.h>

#define PI 3.14159

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results
    printf("\n Area of Circle = %f \n", area);
    printf("Circumference of Circle = %f \n", circumference);

    return 0;
}

