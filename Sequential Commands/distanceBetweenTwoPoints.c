// This program reads four coordinates from the Cartesian plane and calculates the distance between two points.
// Coordinates:
// X1 (X coordinate of point 1), Y1 (Y coordinate of point 1),
// X2 (X coordinate of point 2), Y2 (Y coordinate of point 2).
// Formula: d = √((x2​ − x1​)² + (y2 ​− y1​)²)

#include <stdio.h>
#include <math.h>

int main()
{

    // Input and output variables declarations
    float coordinateX1, coordinateX2, coordinateY1, coordinateY2;
    float pointDistance;

    printf("Enter the X1 coordinate: ");
    scanf("%f", &coordinateX1);

    printf("Enter the Y1 coordinate: ");
    scanf("%f", &coordinateY1);

    printf("Enter the X2 coordinate: ");
    scanf("%f", &coordinateX2);

    printf("Enter the Y2 coordinate: ");
    scanf("%f", &coordinateY2);

    // Calculate the distance between two points
    pointDistance = sqrt(
        pow(coordinateX2 - coordinateX1, 2) +
        pow(coordinateY2 - coordinateY1, 2));

    // Print the result
    printf("The distance between these two points is: %.2f \n", pointDistance);

    return 0;
}