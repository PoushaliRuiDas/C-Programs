#include <stdio.h>
int main() {
    float r, l, b, base, height;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of Circle = %.2f\n", 3.14 * r * r);

    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Area of Rectangle = %.2f\n", l * b);

    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle = %.2f\n", 0.5 * base * height);

    return 0;
}
