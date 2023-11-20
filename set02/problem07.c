#include <stdio.h>

typedef struct _triangle {
    float base, altitude, area;
} Triangle;

// Function to input values for the triangle
Triangle input_triangle() {
    Triangle t;
    printf("Enter the base length of the triangle: ");
    scanf("%f", &t.base);
    printf("Enter the altitude of the triangle: ");
    scanf("%f", &t.altitude);
    return t;
}

// Function to calculate the area of the triangle
void find_area(Triangle *t) {
    t->area = 0.5 * t->base * t->altitude;
}

// Function to output the triangle details, including area
void output(Triangle t) {
    printf("Triangle details:\n");
    printf("Base: %.2f\n", t.base);
    printf("Altitude: %.2f\n", t.altitude);
    printf("Area: %.2f\n", t.area);
}

int main() {
    Triangle myTriangle = input_triangle();
    find_area(&myTriangle);
    output(myTriangle);

    return 0;
}
