#include <stdio.h>

int main() {
    double height;
    double width;
    double perimeter;
    double area;
    printf("Calculating the perimeter and area of a rectangle\n");

    scanf("%lf %lf", &height, &width);
    perimeter = 2 * (height + width);
    area = height * width;

    printf("Height: %f2\n Width: %f2\n Perimeter: %f2\n Area: %f2", height, width, perimeter, area);
    return 0;
}
