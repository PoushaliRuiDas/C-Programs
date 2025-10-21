#include <stdio.h>
int main() {
    int n, sum = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    float avg = (float)sum / n;
    printf("Sum = %d\nAverage = %.2f\n", sum, avg);
    return 0;
}
