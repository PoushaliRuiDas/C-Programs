#include <stdio.h>

int factorial(int n) {   // function definition
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d = %d\n", num, factorial(num));
    return 0;
}
