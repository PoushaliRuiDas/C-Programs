#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d", a + b);
    printf("Difference = %d", a - b);
    printf("Product = %d", a * b);
    printf("Division = %.2f", (float)a / b);

    return 0;
}
