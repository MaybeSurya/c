#include <stdio.h>
#include <stdlib.h>

int add(int x, int y) { return x + y; }
int subtract(int x, int y) { return x - y; }
int multiply(int x, int y) { return x * y; }
int divide(int x, int y) { return x / y; }
int power(int x, int y) {
    if (y < 0) return 0;
    int r = 1;
    for (int i = 0; i < y; ++i) r *= x;
    return r;
}

int main(void) {
    int choice = 0;
    int a, b, res;

    while (1) {
        printf("\nCalculator:\n");
        printf(" 1) Add\n 2) Subtract\n 3) Multiply\n 4) Divide\n 5) Power\n 6) Quit\n");
        printf("Enter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }

        if (choice == 6) {
            printf("Goodbye.\n");
            break;
        }

        if (choice < 1 || choice > 6) {
            printf("Please choose a valid option (1-6).\n");
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }

        printf("Enter two integers separated by space: ");
        if (scanf("%d %d", &a, &b) != 2) {
            printf("Invalid numbers. Returning to menu.\n");
            int c; while ((c = getchar()) != '\n' && c != EOF) {}
            continue;
        }

        switch (choice) {
            case 1: res = add(a, b); printf("Result: %d\n", res); break;
            case 2: res = subtract(a, b); printf("Result: %d\n", res); break;
            case 3: res = multiply(a, b); printf("Result: %d\n", res); break;
            case 4:
                if (b == 0) printf("Error: division by zero.\n");
                else { res = divide(a, b); printf("Result: %d\n", res); }
                break;
            case 5: res = power(a, b); printf("Result: %d\n", res); break;
            default: break;
        }
    }

    return 0;
}
